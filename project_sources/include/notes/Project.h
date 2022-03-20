#ifndef TODOSHNICK_PROJECT_H
#define TODOSHNICK_PROJECT_H

#include "Aspect.h"

class Project: public Note {
public:
    Project(string name, string descr = "", string short_n = "");
    Project(const vector<Note*>& child, string name, string descr = "", string short_n = "");
    ~Project();
    string get_name(char mode = 'a');
    string get_description(char mode = 'a');
//    vector<Mark> get_marks();
    vector<Note> split();
    string test_note_structure();
    note_status get_status();
    void change_status(note_status new_status);
    float get_bar();
    void change_bar(float new_bar);
protected:
    vector<Note*> children_;
    float bar_;
};

#endif //TODOSHNICK_PROJECT_H
