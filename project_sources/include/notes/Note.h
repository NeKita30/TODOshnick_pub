#ifndef TODOSHNICK_NOTE_H
#define TODOSHNICK_NOTE_H
class Note;
class Aspect;
class Project;
class Task;
class Todo;
enum NoteStatus {NOTSTARTED, STARTED, DONE};

#include <iostream>
#include <vector>

class Viewer;
using std::string;
using std::vector;


class Note {
public:
    Note(string name, string descr, string short_n, Note* parent);
    virtual void Complete() = 0;
    virtual void Accept(Viewer* viewer, vector<string>& output) = 0;
    virtual string GetName(char mode) const = 0;
    virtual string GetDescription(char mode) const = 0;
    virtual NoteStatus GetStatus() const = 0;
    virtual void ChildUpdate() = 0;
    virtual void ChangeParent(Note* new_parent) = 0;
    virtual void Start() = 0;
protected:
    string name_;
    string short_name_;
    string description_;
    NoteStatus status_;
    Note* parent_;
};

#endif //TODOSHNICK_NOTE_H
