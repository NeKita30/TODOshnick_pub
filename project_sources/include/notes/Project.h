#ifndef TODOSHNICK_PROJECT_H
#define TODOSHNICK_PROJECT_H

#include "Aspect.h"

class Project: public Aspect {
public:
    Project(string name, string descr = "", string short_n = "");
    Project(const vector<Note*>& child, string name, string descr = "", string short_n = "");
    ~Project();
protected:
    Note* parent_;
};

#endif //TODOSHNICK_PROJECT_H
