#ifndef TODOSHNICK_PROJECT_H
#define TODOSHNICK_PROJECT_H

#include "Aspect.h"

class Project: public Aspect {
public:
    Project(string name, string descr, string short_n, Aspect* parent, const vector<Note*>& children);
    ~Project();
    void Complete() override;
protected:
    Aspect* parent_;
};

#endif //TODOSHNICK_PROJECT_H
