#ifndef STATUSBARVIEWER_H
#define STATUSBARVIEWER_H

#include "Viewer.h"

class StatusBarViewer: public Viewer {
    void ViewAspect(Aspect* aspect, std::vector<std::string>& output) override;
    void ViewProject(Project* project, std::vector<std::string>& output) override;
    void ViewTask(Task* task, std::vector<std::string>& output) override;
    void ViewTodo(Todo* todo, std::vector<std::string>& output) override;
};


#endif // STATUSBARVIEWER_H
