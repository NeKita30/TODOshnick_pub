#include "Interface.h"

#include <utility>

void Interface::RequestProcessing(const vector<string>& request) {
    if (request[0] == "new") {
        Add_Note(request);
    }
    if (request[0] == "complete") {
        Note* note = FindByShortName(request[1]);
        Complete(note);
    }
    if (request[0] == "view") {
        vector<string> output = Choose_Viewer(request);
        SendAnswer(output);
    }
}

void Interface::Add_Note(const vector<string>& request) {
    const string& name = request[2];
    const string& short_name = request[3];
    const string& description = request[4];
    Aspect* parent = nullptr;
    vector<Note*> children{};
    int start_of_children_lst = 5;
    if (request[1] == "P" || request[1] == "Ts" || request[1] == "Td") {
        if (request.size() > 5 && request[5] != "|") {
            parent = dynamic_cast<Aspect*>(FindByShortName(request[5]));
            start_of_children_lst = 7;
        } else if (request.size() > 5 && request[5] == "|") {
            start_of_children_lst = 6;
        }
    }
    if (request[1] == "A" || request[1] == "P" || request[1] == "Ts") {
        for (int i = start_of_children_lst; i < request.size(); ++i) {
            auto* ptr = FindByShortName(request[i]);
            if (ptr != nullptr) {
                children.push_back(ptr);
            }
        }
    }
    if (request[1] == "A") {
        Add_Aspect(name, description, short_name, children);
    }
    if (request[1] == "P") {
        Add_Project(name, description, short_name, children, parent);
    }
    if (request[1] == "Ts") {
        Add_Task(name, description, short_name, children, parent);
    }
    if (request[1] == "Td") {
        Add_Todo(name, description, short_name, parent);
    }
}

vector<string> Interface::Choose_Viewer(const vector<string>& request) {
    Note* note = FindByShortName(request[2]);
    Viewer* viewer;
    if (request[1] == "tree") {
        viewer = new RecursiveFull;
    } else if (request[1] == "short") {
        viewer = new ShortNameViewer;
    } else if (request[1] == "description") {
        viewer = new DescriptionViewer;
    } else if (request[1] == "status") {
        viewer = new StatusBarViewer;
    } else if (request[1] == "full-tree") {
        viewer = new RecursiveAllInfo;
    } else {
        viewer = new FullNameViewer;
    }
    return View(viewer, note);
}

void Interface::Complete(Note* note) {
    note->Complete();
}

void Interface::Start(Note* note) {
    note->Start();
}

void Interface::Bind(Aspect* parent, Note* child) {
    parent->Add(child);
}


Note* Interface::FindByShortName(const string& sh_name) {
    try {
        return sh_name_to_note.at(sh_name);
    }
    catch (const std::out_of_range& e) {
        std::cerr << "not such note found";
        return nullptr;
    }
}

vector<string> Interface::View(Viewer* viewer, Note* note) {
    vector<string> output;
    note->Accept(viewer, output);
    return output;
}

Aspect* Interface::Add_Aspect(string name, string description, const string& short_n, const vector<Note*>& child) {
    auto* new_aspect = new Aspect(string(std::move(name)), string(std::move(description)), short_n, child);
    roots_.push_back(new_aspect);
    sh_name_to_note.insert({short_n, new_aspect});
    return new_aspect;
}

Project* Interface::Add_Project(string name, string description, const string& short_n,
                               const vector<Note*>& child, Aspect* parent) {
    auto new_project = new Project(std::move(name), std::move(description), short_n, parent, child);
    if (parent != nullptr) {
        Bind(parent, new_project);
    } else {
        roots_.push_back(new_project);
    }
    sh_name_to_note.insert({short_n, new_project});
    return new_project;
}

Task* Interface::Add_Task(string name, string description, string short_n, const vector<Note*>& child, Aspect* parent) {
    auto* new_task = new Task(std::move(name), std::move(description), short_n, parent, child);
    if (parent != nullptr) {
        Bind(parent, new_task);
    } else {
        roots_.push_back(new_task);
    }
    sh_name_to_note.insert({short_n, new_task});
    return new_task;
}

Todo* Interface::Add_Todo(string name, string description, string short_n, Aspect* parent) {
    auto* new_todo = new Todo(std::move(name), std::move(description), short_n, parent);
    if (parent != nullptr) {
        Bind(parent, new_todo);
    } else {
        roots_.push_back(new_todo);
    }
    sh_name_to_note.insert({short_n, new_todo});
    return new_todo;
}
