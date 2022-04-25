#ifndef TODOSHNICK_TODO_H
#define TODOSHNICK_TODO_H

#include "Note.h"

class Todo: public Note {
public:
    Todo(string name, string descr = "", string short_name = "", Note* parent = nullptr);
    void Complete() override;
    void Start() override;
    string GetName(char mode) const override;
    string GetDescription(char mode) const override;
    NoteStatus GetStatus() const override;
    void ChangeParent(Note* new_parent) override;
    void ChildUpdate() override;
private:
};

#endif //TODOSHNICK_TODO_H
