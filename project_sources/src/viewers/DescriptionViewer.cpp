#include "DescriptionViewer.h"

void DescriptionViewer::ViewAspect(const Aspect& aspect, std::vector<std::string>& output) {
    output.push_back(aspect.GetDescription('s'));
}

void DescriptionViewer::ViewProject(const Project& project, std::vector<std::string>& output) {
    output.push_back(project.GetDescription('s'));
}

void DescriptionViewer::ViewTask(const Task& task, std::vector<std::string>& output) {
    output.push_back(task.GetDescription('s'));
}

void DescriptionViewer::ViewTodo(const Todo& todo, std::vector<std::string>& output) {
    output.push_back(todo.GetDescription('s'));
}
