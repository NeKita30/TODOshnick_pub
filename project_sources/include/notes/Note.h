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
    virtual void Complete() = 0;
protected:
    virtual string GetName(char mode) const = 0;
    virtual string GetDescription(char mode) const = 0;
    virtual NoteStatus GetStatus() const = 0;
    string name_;
    string short_name_;
    string description_;
    NoteStatus status_;
};

#endif //TODOSHNICK_NOTE_H
