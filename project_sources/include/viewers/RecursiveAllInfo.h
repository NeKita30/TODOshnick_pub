#ifndef RECURSIVEALLINFO_H
#define RECURSIVEALLINFO_H

#include "Viewer.h"

class RecursiveAllInfo: public Viewer {
    void ViewAspect(Aspect* aspect, std::vector<std::string>& output) override;
    void ViewProject(Project* project, std::vector<std::string>& output) override;
    void ViewTask(Task* task, std::vector<std::string>& output) override;
    void ViewTodo(Todo* todo, std::vector<std::string>& output) override;
};


#endif // RECURSIVEALLINFO_H
