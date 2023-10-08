#include "Project.h"
#include "Viewer.h"
#include <utility>

Project::Project(string name, string descr, string short_n,
                 Note* parent, const vector<Note*>& children) :
Aspect(std::move(name), std::move(descr), std::move(short_n), children), parent_(parent){};

void Project::Accept(Viewer* viewer, vector<string>& output) {
    viewer->ViewProject(this, output);
}

void Project::Complete() {
    status_ = DONE;
    parent_->ChildUpdate();
}

void Project::Start() {
    status_ = STARTED;
    if (parent_->GetStatus() == NOTSTARTED) {
        parent_->Start();
    }
}

void Project::ChangeParent(Note* new_parent) {
    parent_ = new_parent;
}
