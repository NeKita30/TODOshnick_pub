#ifndef TODOSHNICK_TODO_H
#define TODOSHNICK_TODO_H

#include "Note.h"

class Todo: public Note {
public:
    Todo();
    ~Todo();
    string get_name(char mode);
    string get_description(char mode);
//    virtual vector<Mark> get_marks();
    vector<Note> split();
    note_status get_status();
private:

};

#endif //TODOSHNICK_TODO_H
