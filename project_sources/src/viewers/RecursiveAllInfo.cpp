#include "RecursiveAllInfo.h"

void RecursiveAllInfo::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    string result = "Aspect " + aspect->GetName('f') + "(" +
                    aspect->GetName('s') + ") - " + std::to_string(aspect->GetBar()) + "%";
    if (aspect->GetStatus() == NOTSTARTED) {
        result += " (not started)";
    }
    if (aspect->GetStatus() == DONE) {

        result += " (done)";
    }
    output.push_back(result);
    output.push_back(aspect->GetDescription());
    if (aspect->GetChildren().empty()) {
        return;
    }
    output.push_back("Projects:");
    int sl = output.size();
    for (auto& child: aspect->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "| " + output[sl + i];
    }
    output.push_back("|--------------------");
}

void RecursiveAllInfo::ViewProject(Project* project, std::vector<std::string>& output) {
    string result = "Project " + project->GetName('f') + "(" +
                    project->GetName('s') + ") - " + std::to_string(project->GetBar()) + "%";
    if (project->GetStatus() == NOTSTARTED) {
        result += " (not started)";
    }
    if (project->GetStatus() == DONE) {

        result += " (done)";
    }
    output.push_back(result);
    output.push_back(project->GetDescription());
    if (project->GetChildren().empty()) {
        return;
    }
    output.push_back("Tasks:");
    int sl = output.size();
    for (auto& child: project->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "| " + output[sl + i];
    }
    output.push_back("|--------------------");
}

void RecursiveAllInfo::ViewTask(Task* task, std::vector<std::string>& output) {
    string result = "Task " + task->GetName('f') + "(" +
                    task->GetName('s') + ") - " + std::to_string(task->GetBar()) + "%";
    if (task->GetStatus() == NOTSTARTED) {
        result += " (not started)";
    }
    if (task->GetStatus() == DONE) {

        result += " (done)";
    }
    output.push_back(result);
    output.push_back(task->GetDescription());
    if (task->GetChildren().empty()) {
        return;
    }
    output.push_back("TODOs:");
    int sl = output.size();
    for (auto& child: task->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "| " + output[sl + i];
    }
    output.push_back("|--------------------");
}

void RecursiveAllInfo::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    string result = "TODO " + todo->GetName('f') + "(" + todo->GetName('s') + ") - ";
    if (todo->GetStatus() == NOTSTARTED) {
        result += "not started";
    }
    if (todo->GetStatus() == STARTED) {
        result += "started";
    }
    if (todo->GetStatus() == DONE) {

        result += "done";
    }
    output.push_back(result);
}