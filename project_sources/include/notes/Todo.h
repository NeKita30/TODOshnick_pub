#ifndef TODOSHNICK_TODO_H
#define TODOSHNICK_TODO_H

#include "Note.h"

class Todo: public Note {
public:
    Todo(string name, string descr = "", string short_n = "");
    ~Todo();
    string get_name(char mode = 'a');
    string get_description(char mode = 'a');
//    virtual vector<Mark> get_marks();
    vector<Note> split();
    note_status get_status();
    void change_status(note_status new_status);
};

#endif //TODOSHNICK_TODO_H
