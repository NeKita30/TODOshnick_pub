#include "ShortNameViewer.h"

void ShortNameViewer::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back(aspect->GetName('s'));
}

void ShortNameViewer::ViewProject(Project* project, std::vector<std::string>& output) {
    output.push_back(project->GetName('s'));
}

void ShortNameViewer::ViewTask(Task* task, std::vector<std::string>& output) {
    output.push_back(task->GetName('s'));
}

void ShortNameViewer::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back(todo->GetName('s'));
}
