#include "DescriptionViewer.h"

void DescriptionViewer::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back(aspect->GetDescription());
}

void DescriptionViewer::ViewProject(Project* project, std::vector<std::string>& output) {
    output.push_back(project->GetDescription());
}

void DescriptionViewer::ViewTask(Task* task, std::vector<std::string>& output) {
    output.push_back(task->GetDescription());
}

void DescriptionViewer::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back(todo->GetDescription());
}
