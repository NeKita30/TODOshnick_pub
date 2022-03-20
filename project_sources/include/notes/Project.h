#ifndef TODOSHNICK_PROJECT_H
#define TODOSHNICK_PROJECT_H

#include "Aspect.h"

class Project: public Aspect {
public:
    Project(string name, string descr, string short_n);
    ~Project();
    string get_name(char mode);
    string get_description(char mode);
//    vector<Mark> get_marks();
    vector<Note> split();
    string test_note_structure();
    note_status get_status();
    float get_bar();
private:
};

#endif //TODOSHNICK_PROJECT_H
