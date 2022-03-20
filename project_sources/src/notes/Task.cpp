#include "Task.h"

Task::Task(string name, string descr, string short_n) :
Project(name, descr, short_n) {}

Task::Task(const vector<Note*>& child, string name, string descr, string short_n) :
Project(child, name, descr, short_n) {}

Task::~Task() = default;

string Task::get_name(char mode) {
    return Project::get_name(mode);
}

string Task::get_description(char mode) {
    return Project::get_description(mode);
}

vector<Note> Task::split() {
//    vector<Note> new_notes = {Todo(this->name_), Todo(this->name_)};
//    return new_notes;
}

string Task::test_note_structure() {
    return "Task test func";
}

note_status Task::get_status() {
    return Project::get_status();
}

void Task::change_status(note_status new_status) {
    Project::change_status(new_status);
}

//    vector<Mark> get_marks();
float Task::get_bar() {
    return Project::get_bar();
}

void Task::change_bar(float new_bar) {
    Project::change_bar(new_bar);
}
