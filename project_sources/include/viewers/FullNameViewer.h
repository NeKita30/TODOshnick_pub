
#ifndef FULLNAMEVIEWER_H
#define FULLNAMEVIEWER_H

#include "Viewer.h"

class FullNameViewer: public Viewer {
public:
    void ViewAspect(Aspect* aspect, std::vector<std::string>& output) override;
    void ViewProject(Project* project, std::vector<std::string>& output) override;
    void ViewTask(Task* task, std::vector<std::string>& output) override;
    void ViewTodo(Todo* todo, std::vector<std::string>& output) override;
};


#endif // FULLNAMEVIEWER_H
