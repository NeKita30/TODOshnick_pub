#include "Aspect.h"

#include <utility>

Aspect::Aspect(string name, string descr = "", string short_n = "") :
        Note(std::move(name), std::move(descr), std::move(short_n)),
        bar_(0) {}

string Aspect::GetName(char mode) const {
    switch(mode) {
        case 'f':
            return name_;
        case 's':
            return short_name_;
        default:
            return "";
    }
}

string Aspect::GetDescription(char mode) const {
    return description_;
}

NoteStatus Aspect::GetStatus() const {
    return status_;
}

float Aspect::GetBar() const {
    return bar_;
}

void Aspect::ChangeBar(NoteStatus new_bar) {
    bar_ = new_bar;
    if (bar_ == 1) {
        Complete();
    }
}

void Aspect::Complete() {
    status_ = DONE;
}

void Aspect::Add(Note* new_note) {
    bar_ = (bar_ * float(children_.size())) / float(children_.size() + 1);
    children_.push_back(new_note);
}


Aspect::~Aspect() = default;