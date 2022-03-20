#ifndef TODOSHNICK_TASK_H
#define TODOSHNICK_TASK_H

#include "Project.h"

class Task: public Project {
public:
    Task(string name, string descr, string short_n);
    ~Task();
    string get_name(char mode);
    string get_description(char mode);
//    vector<Mark> get_marks();
    vector<Note> split();
    string test_note_structure();
    note_status get_status();
    float get_bar();
private:
};

#endif //TODOSHNICK_TASK_H
