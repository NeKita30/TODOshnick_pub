#include "Aspect.h"
#include "Viewer.h"
#include <utility>

Aspect::Aspect(string name, string descr, string short_n, const vector<Note*>& children) :
        Note(std::move(name), std::move(descr), std::move(short_n), nullptr),
        bar_(0), bar_step_(0), children_(children) {}

void Aspect::Accept(Viewer* viewer, vector<string>& output) {
    viewer->ViewAspect(this, output);
}

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

string Aspect::GetDescription() const {
    return description_;
}

NoteStatus Aspect::GetStatus() const {
    return status_;
}

int Aspect::GetBar() const {
    return bar_;
}

vector<Note*> Aspect::GetChildren() const {
    return children_;
}

void Aspect::ChangeBar(int new_bar) {
    bar_ = new_bar;
    if (bar_ == 100) {
        Complete();
    }
}

void Aspect::Complete() {
    status_ = DONE;
}

void Aspect::Start() {
    status_ = STARTED;
}

void Aspect::ChangeParent(Note* new_parent) {}

void Aspect::Add(Note* new_note) {
    int num_completed = 0;
    if (bar_step_ != 0) {
        num_completed = bar_ / bar_step_;
    }

    bar_step_ = int(100 /int(children_.size() + 1));
    bar_ = bar_step_ * num_completed;
    children_.push_back(new_note);
    new_note->ChangeParent(this);
}

void Aspect::ChildUpdate() {
    if (status_ == NOTSTARTED) {
        Start();
    }
    int new_bar = bar_ + bar_step_;
    ChangeBar(new_bar);
}
