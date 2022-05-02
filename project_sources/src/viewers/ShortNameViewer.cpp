#include "ShortNameViewer.h"

void ShortNameViewer::ViewAspect(const Aspect& aspect, std::vector<std::string>& output) {
    output.push_back(aspect.GetName('s'));
}

void ShortNameViewer::ViewProject(const Project& project, std::vector<std::string>& output) {
    output.push_back(project.GetName('s'));
}

void ShortNameViewer::ViewTask(const Task& task, std::vector<std::string>& output) {
    output.push_back(task.GetName('s'));
}

void ShortNameViewer::ViewTodo(const Todo& todo, std::vector<std::string>& output) {
    output.push_back(todo.GetName('s'));
}
