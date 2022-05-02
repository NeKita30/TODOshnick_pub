#ifndef TEST_PROJECT01_SHORTNAMEVIEWER_H
#define TEST_PROJECT01_SHORTNAMEVIEWER_H

#include "Viewer.h"

class ShortNameViewer: Viewer {
public:
    void ViewAspect(Aspect* aspect, std::vector<std::string>& output) override;
    void ViewProject(Project* project, std::vector<std::string>& output) override;
    void ViewTask(Task* task, std::vector<std::string>& output) override;
    void ViewTodo(Todo* todo, std::vector<std::string>& output) override;
};


#endif //TEST_PROJECT01_SHORTNAMEVIEWER_H