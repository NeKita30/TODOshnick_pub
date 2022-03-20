#include "Project.h"

Project::Project(string name, string descr, string short_n) :
Note(name, descr, short_n), children_(0), bar_(0) {};

Project::Project(const vector<Note*>& child, string name, string descr, string short_n) :
Note(name, descr, short_n), children_(child), bar_(0) {};

string Project::test_note_structure() {
    return "Project test func";
}
string Project::get_name(char mode) {
    switch(mode) {
        case 'n':
            return name_;
        case 's':
            return short_name_;
        case 'a':
        default:
            string task_name_out = name_;
            task_name_out += '\n';
            for (int i = 0; i < children_.size(); ++i) {
                task_name_out += std::to_string(i)+ ")\n";
                task_name_out += children_[i]->get_name('a');
                task_name_out += "\n---------\n";
            }
            task_name_out += "---------\n";
            return task_name_out;
    }
}

string Project::get_description(char mode) {
    switch(mode) {
        case 's':
            return "";
        case 'a':
        default:
            return description_;
    }
}
//    vector<Mark> get_marks();
note_status Project::get_status() {
    return this->status_;
}

vector<Note> Project::split() {
//    vector<Note> new_notes = {Todo(this->name_), Todo(this->name_)};
//    return new_notes;
}

void Project::change_status(note_status new_status) {
    this->status_ = new_status;
}

//    vector<Mark> get_marks();
float Project::get_bar() {
    return status_;
}

void Project::change_bar(float new_bar) {
    bar_ = new_bar;
}

Project::~Project() = default;