#include "Project.h"

#include <utility>

Project::Project(string name, string descr = "", string short_n = "",
                 Aspect* parent = nullptr, const vector<Note*>& children = {}) :
Aspect(std::move(name), std::move(descr), std::move(short_n), children), parent_(parent){};

void Project::Complete() {
    status_ = DONE;
    parent_->ChildUpdate();
}

Project::~Project() = default;