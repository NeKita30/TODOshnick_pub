
#ifndef TEST_PROJECT01_FULLNAMEVIEWER_H
#define TEST_PROJECT01_FULLNAMEVIEWER_H

#include "Viewer.h"

class FullNameViewer: Viewer {
    void ViewAspect(const Aspect& aspect, std::vector<std::string>& output) override;
    void ViewProject(const Project& project, std::vector<std::string>& output) override;
    void ViewTask(const Task& task, std::vector<std::string>& output) override;
    void ViewTodo(const Todo& todo, std::vector<std::string>& output) override;
};


#endif //TEST_PROJECT01_FULLNAMEVIEWER_H
