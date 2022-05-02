#ifndef TEST_PROJECT01_VIEWER_H
#define TEST_PROJECT01_VIEWER_H

#include "Note.h"
#include "Aspect.h"
#include "Project.h"
#include "Task.h"
#include "Todo.h"

class Viewer {
    virtual void ViewAspect(const Aspect& aspect, std::vector<std::string>& output) = 0;
    virtual void ViewProject(const Project& project, std::vector<std::string>& output) = 0;
    virtual void ViewTask(const Task& task, std::vector<std::string>& output) = 0;
    virtual void ViewTodo(const Todo& todo, std::vector<std::string>& output) = 0;
};
#endif //TEST_PROJECT01_VIEWER_H
