#include "FullNameViewer.h"

void FullNameViewer::ViewAspect(const Aspect& aspect, std::vector<std::string>& output) {
    output.push_back(aspect.GetName('f'));
}

void FullNameViewer::ViewProject(const Project& project, std::vector<std::string>& output) {
    output.push_back(project.GetName('f'));
}

void FullNameViewer::ViewTask(const Task& task, std::vector<std::string>& output) {
    output.push_back(task.GetName('f'));
}

void FullNameViewer::ViewTodo(const Todo& todo, std::vector<std::string>& output) {
    output.push_back(todo.GetName('f'));
}
