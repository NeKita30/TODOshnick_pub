#include "Aspect.h"

Aspect::Aspect(string name, string descr = "", string short_n = "") :
        Note(name, descr, short_n) {};

string Aspect::test_note_structure() {
    return "Aspect test func";
}

string Aspect::get_name(char mode) {}
string Aspect::get_description(char mode) {}
//    vector<Mark> get_marks();
vector<Note> Aspect::split() {}
note_status Aspect::get_status() {}
float Aspect::get_bar() {}

Aspect::~Aspect() {}