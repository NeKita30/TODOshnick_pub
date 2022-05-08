#ifndef RECURSIVEFULL_H
#define RECURSIVEFULL_H

#include "Viewer.h"

class RecursiveFull: public Viewer {
    void ViewAspect(Aspect* aspect, std::vector<std::string>& output) override;
    void ViewProject(Project* project, std::vector<std::string>& output) override;
    void ViewTask(Task* task, std::vector<std::string>& output) override;
    void ViewTodo(Todo* todo, std::vector<std::string>& output) override;
};


#endif //TEST_PROJECT01_RECURSIVEFULL_H
