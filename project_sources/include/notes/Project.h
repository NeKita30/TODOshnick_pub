#ifndef TODOSHNICK_PROJECT_H
#define TODOSHNICK_PROJECT_H

#include "Aspect.h"

class Project: public Aspect {
public:
    Project(string name, string descr = "", string short_n = "",
            Note* parent = nullptr, const vector<Note*>& children = {});
    void Complete() override;
    void Start() override;
    void ChangeParent(Note* new_parent) override;
protected:
    Note* parent_;
};

#endif //TODOSHNICK_PROJECT_H
