#include "StatusBarViewer.h"

void StatusBarViewer::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back(std::to_string(aspect->GetBar()) + "%");
}

void StatusBarViewer::ViewProject(Project* project, std::vector<std::string>& output) {
    string result = std::to_string(project->GetBar()) + "%";
    if (project->GetStatus() == NOTSTARTED) {
        result += " (not started)";
    }
    if (project->GetStatus() == DONE) {
        result += " (done)";
    }
    output.push_back(result);
}

void StatusBarViewer::ViewTask(Task* task, std::vector<std::string>& output) {
    string result = std::to_string(task->GetBar()) + "%";
    if (task->GetStatus() == NOTSTARTED) {
        result += " (not started)";
    }
    if (task->GetStatus() == DONE) {
        result += " (done)";
    }
    output.push_back(result);
}

void StatusBarViewer::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back(std::to_string(todo->GetStatus()));
}
