#ifndef TODOSHNICK_TASK_H
#define TODOSHNICK_TASK_H

#include "Project.h"

class Task: public Project {
public:
    Task(string name, string descr = "", string short_name = "",
         Note* parent = nullptr, const vector<Note*>& children = {});
private:
};

#endif //TODOSHNICK_TASK_H
