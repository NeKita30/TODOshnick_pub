#include "Aspect.h"

#include <utility>

Aspect::Aspect(string name, string descr = "", string short_n = "", const vector<Note*>& children={}) :
        Note(std::move(name), std::move(descr), std::move(short_n)),
        bar_(0), bar_step_(0) {}

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

void Aspect::ChangeBar(float new_bar) {
    bar_ = new_bar;
    if (bar_ == 1) {
        Complete();
    }
}

void Aspect::Complete() {
    status_ = DONE;
}

void Aspect::Add(Note* new_note) {
    int num_completed = int(bar_ * 100) / bar_step_;
    bar_step_ = int(100 /int(children_.size() + 1));
    bar_ = float(bar_step_) / 100 * float(num_completed);
    children_.push_back(new_note);
}

void Aspect::ChildUpdate() {
    float new_bar = bar_ + float(bar_step_) / 100;
    ChangeBar(bar_);
}


Aspect::~Aspect() = default;