#include "Todo.h"

Todo::Todo(string name, string descr, string short_n) :
Note(name, descr, short_n) {}

Todo::~Todo() = default;

string Todo::get_name(char mode) {
    switch(mode) {
        case 's':
            return this->short_name_;
        case 'a':
        default:
            return this->name_;
    }
}

string Todo::get_description(char mode) {
    switch(mode) {
        case 's':
            return "";
        case 'a':
        default:
            return this->description_;
    }
}

//    virtual vector<Mark> get_marks() {}
vector<Note> Todo::split() {
//    vector<Note> new_notes = {Todo(this->name_), Todo(this->name_)};
//    return new_notes;
}
note_status Todo::get_status() {
    return this->status_;
}

void Todo::change_status(note_status new_status) {
    this->status_ = new_status;
}

