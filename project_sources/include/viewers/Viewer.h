#ifndef VIEWER_H
#define VIEWER_H
class Viewer;
#include "Note.h"
#include "Aspect.h"
#include "Project.h"
#include "Task.h"
#include "Todo.h"

class Viewer {
public:
    virtual void ViewAspect(Aspect* aspect, std::vector<std::string>& output) = 0;
    virtual void ViewProject(Project* project, std::vector<std::string>& output) = 0;
    virtual void ViewTask(Task* task, std::vector<std::string>& output) = 0;
    virtual void ViewTodo(Todo* todo, std::vector<std::string>& output) = 0;
};
#endif // VIEWER_H
