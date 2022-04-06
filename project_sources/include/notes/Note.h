#ifndef TODOSHNICK_NOTE_H
#define TODOSHNICK_NOTE_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;

enum NoteStatus {NOTSTARTED, STARTED, DONE};

class Note {
public:
    ~Note();
    Note(string name, string descr, string short_n);
    virtual string GetName(char mode) = 0;
    virtual string GetDescription(char mode) = 0;
    virtual vector<Note*> Split() = 0;
    virtual NoteStatus GetStatus() = 0;
    virtual void ChangeStatus(NoteStatus new_status) = 0;
    virtual void Complete() = 0;
    virtual void Add(Note* new_note) = 0;
protected:
    string name_;
    string short_name_;
    string description_;
    NoteStatus status_;
    Note* parent_;
};

#endif //TODOSHNICK_NOTE_H
