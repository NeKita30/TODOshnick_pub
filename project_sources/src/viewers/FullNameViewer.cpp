#include "FullNameViewer.h"

void FullNameViewer::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back(aspect->GetName('f'));
}

void FullNameViewer::ViewProject(Project* project, std::vector<std::string>& output) {
    output.push_back(project->GetName('f'));
}

void FullNameViewer::ViewTask(Task* task, std::vector<std::string>& output) {
    output.push_back(task->GetName('f'));
}

void FullNameViewer::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back(todo->GetName('f'));
}
