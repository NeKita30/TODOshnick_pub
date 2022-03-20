#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H

#include "Note.h"

class Aspect: public Note {
public:
    Aspect(string name, string descr, string short_n);
    ~Aspect();
    string get_name(char mode);
    string get_description(char mode);
//    vector<Mark> get_marks();
    vector<Note> split();
    note_status get_status();
    float get_bar();
    string test_note_structure();
private:
    vector<Note> children_;
    float bar_;
};
#endif //TODOSHNICK_ASPECT_H
