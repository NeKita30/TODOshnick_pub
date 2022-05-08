#include "RecursiveFull.h"

void RecursiveFull::ViewAspect(Aspect* aspect, std::vector<std::string>& output) {
    output.push_back(aspect->GetName('f'));
    output.push_back("Projects:");
    int sl = output.size();
    for (auto& child: aspect->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "  " + output[sl + i];
    }
    output.push_back("---------------------");
}

void RecursiveFull::ViewProject(Project* project, std::vector<std::string>& output) {
    output.push_back(project->GetName('f'));
    output.push_back("Tasks:");
    int sl = output.size();
    for (auto& child: project->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "  " + output[sl + i];
    }
    output.push_back("---------------------");
}

void RecursiveFull::ViewTask(Task* task, std::vector<std::string>& output) {
    output.push_back(task->GetName('f'));
    output.push_back("TODO:");
    int sl = output.size();
    for (auto& child: task->GetChildren()) {
        child->Accept(this, output);
    }
    int el = output.size();
    for (int i = 0; i < el - sl; ++i) {
        output[sl + i] = "  " + output[sl + i];
    }
    output.push_back("---------------------");
}

void RecursiveFull::ViewTodo(Todo* todo, std::vector<std::string>& output) {
    output.push_back(todo->GetName('f'));
}
