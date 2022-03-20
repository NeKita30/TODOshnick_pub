#include "Note.h"

Note::Note(string name, string descr = "", string short_n = "") :
name_(name), description_(descr), short_name_(short_n) {}

string Note::test_note_structure() {
    return "Note and Todo test func";
}

Note::~Note() = default;