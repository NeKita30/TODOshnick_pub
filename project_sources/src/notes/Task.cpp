#include "Task.h"

Task::Task(string name, string descr, string short_n) :
children_(0), Note(name, descr, short_n), bar_(0) {}

Task::Task(const vector<Note*>& child, string name, string descr, string short_n) :
children_(child), Note(name, descr, short_n), bar_(0) {}

Task::~Task() = default;

string Task::get_name(char mode) {
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
                task_name_out += children_[i]->get_name('n');
                task_name_out += "'\n---------\n";
            }
            task_name_out += "---------\n";
            return task_name_out;
    }
}

string Task::get_description(char mode) {
    switch(mode) {
        case 's':
            return "";
        case 'a':
        default:
            return description_;
    }
}

vector<Note> Task::split() {
//    vector<Note> new_notes = {Todo(this->name_), Todo(this->name_)};
//    return new_notes;
}

string Task::test_note_structure() {
    return "Task test func";
}

note_status Task::get_status() {
    return this->status_;
}

void Task::change_status(note_status new_status) {
    this->status_ = new_status;
}

//    vector<Mark> get_marks();
float Task::get_bar() {
    return status_;
}

void Task::change_bar(float new_bar) {
    bar_ = new_bar;
}
