#ifndef TODOSHNICK_NOTE_H
#define TODOSHNICK_NOTE_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;

class Note {
public:
//    virtual string get_name(char mode) = 0;
//    virtual string get_description(char mode) = 0;
    // vector<Mark> get_marks() = 0;
//    virtual vector<Note> split() = 0;
    virtual string test_note_structure();
private:
    string name_;
    string short_name_;
    string description_;
//    vector<Mark> marks_;
//    vector<Material> materials_;
};

#endif //TODOSHNICK_NOTE_H
