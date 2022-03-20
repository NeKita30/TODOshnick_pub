#include "Task.h"

string Task::test_note_structure() {
    return "Task test func";
}
string Task::get_name(char mode) {}
string Task::get_description(char mode) {}
//    vector<Mark> get_marks();
vector<Note> Task::split() {}
note_status Task::get_status() {}
float Task::get_bar() {}

Task::~Task() {};
Task::Task() {};