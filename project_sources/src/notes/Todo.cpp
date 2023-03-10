#include "Todo.h"

#include <utility>

Todo::Todo(string name, string descr, string short_n, Note* parent):
Note(std::move(name), std::move(descr), std::move(short_n), parent) {}


void Todo::Complete() {
    status_ = DONE;
    parent_->ChildUpdate();
}

void Todo::Start() {
    status_ = STARTED;
    if (parent_->GetStatus() == NOTSTARTED) {
        parent_->Start();
    }
}

void Todo::ChildUpdate() {}

void Todo::ChangeParent(Note* new_parent) {
    parent_ = new_parent;
}

string Todo::GetName(char mode) const {
    switch(mode) {
        case 'f':
            return name_;
        case 's':
            return short_name_;
        default:
            return "";
    }
}

string Todo::GetDescription(char mode) const {
    return description_;
}

NoteStatus Todo::GetStatus() const {
    return status_;
}
