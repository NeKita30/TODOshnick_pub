#ifndef TODOSHNICK_PROJECT_H
#define TODOSHNICK_PROJECT_H

#include "Aspect.h"

class Project: public Aspect {
public:
    Project(string name, string descr, string short_n, Note* parent, const vector<Note*>& children);
    ~Project();
    void Complete() override;
    void Start() override;
protected:
    Note* parent_;
};

#endif //TODOSHNICK_PROJECT_H
