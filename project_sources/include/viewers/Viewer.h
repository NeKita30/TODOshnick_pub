#ifndef TEST_PROJECT01_VIEWER_H
#define TEST_PROJECT01_VIEWER_H
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
#endif //TEST_PROJECT01_VIEWER_H
