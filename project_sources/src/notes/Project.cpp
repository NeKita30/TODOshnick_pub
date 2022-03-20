#include "Project.h"

Project::Project(string name, string descr = "", string short_n = "") :
        Aspect(name, descr, short_n) {};

string Project::test_note_structure() {
    return "Project test func";
}
string Project::get_name(char mode) {}
string Project::get_description(char mode) {}
//    vector<Mark> get_marks();
vector<Note> Project::split() {}
note_status Project::get_status() {}
float Project::get_bar() {}

Project::~Project() {};