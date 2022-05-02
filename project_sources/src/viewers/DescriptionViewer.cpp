#include "DescriptionViewer.h"

void DescriptionViewer::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back(aspect->GetDescription('s'));
}

void DescriptionViewer::ViewProject(Project* project, std::vector<std::string>& output) {
    output.push_back(project->GetDescription('s'));
}

void DescriptionViewer::ViewTask(Task* task, std::vector<std::string>& output) {
    output.push_back(task->GetDescription('s'));
}

void DescriptionViewer::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back(todo->GetDescription('s'));
}
