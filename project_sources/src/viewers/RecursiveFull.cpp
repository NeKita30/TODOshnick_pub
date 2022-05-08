#include "RecursiveFull.h"

void RecursiveFull::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back("Aspect " + aspect->GetName('f') + "(" + aspect->GetName('s') + ")");
    if (aspect->GetChildren().empty()) {
        return;
    }
    output.push_back("Projects:");
    int sl = output.size();
    for (auto& child: aspect->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "| " + output[sl + i];
    }
    output.push_back("|--------------------");
}

void RecursiveFull::ViewProject(Project* project, std::vector<std::string>& output) {
    output.push_back("Project " + project->GetName('f') + "(" + project->GetName('s') + ")");
    if (project->GetChildren().empty()) {
        return;
    }
    output.push_back("Tasks:");
    int sl = output.size();
    for (auto& child: project->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "| " + output[sl + i];
    }
    output.push_back("|--------------------");
}

void RecursiveFull::ViewTask(Task* task, std::vector<std::string>& output) {
    output.push_back("Task " + task->GetName('f') + "(" + task->GetName('s') + ")");
    if (task->GetChildren().empty()) {
        return;
    }
    output.push_back("TODOs:");
    int sl = output.size();
    for (auto& child: task->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "| " + output[sl + i];
    }
    output.push_back("|--------------------");
}

void RecursiveFull::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back("TODO " + todo->GetName('f') + "(" + todo->GetName('s') + ")");
}
