#ifndef TODOSHNICK_NOTE_H
#define TODOSHNICK_NOTE_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;

enum note_status {NOTSTARTED, STARTED, DONE};

class Note {
public:
    ~Note();
    Note(string name, string descr, string short_n);
    virtual string get_name(char mode) = 0;
    virtual string get_description(char mode) = 0;
//    virtual vector<Mark> get_marks() = 0;
    virtual vector<Note> split() = 0;
    virtual note_status get_status() = 0;
    virtual string test_note_structure();
    virtual void change_status(note_status new_status) = 0;
protected:
    string name_;
    string short_name_;
    string description_;
    note_status status_;
//    vector<Mark> marks_;
//    vector<Material> materials_;
};

#endif //TODOSHNICK_NOTE_H
