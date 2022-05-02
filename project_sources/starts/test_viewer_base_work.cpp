#include "Note.h"
#include "Aspect.h"
#include "Project.h"
#include "Task.h"
#include "Todo.h"

#include "Viewer.h"
#include "ShortNameViewer.h"
#include "FullNameViewer.h"
#include "DescriptionViewer.h"

int main() {
    Aspect aspect_a("Study", "Projects for MSU education", "S");
    Aspect aspect_b("Live", "Work on live", "L");
    Project project_a("Python study", "Learning Python");
    Task task_a("Object-oriented programming study");
    Todo todo_a("Download books");
    Todo todo_b("Install Python");
    Task task_b("Find girl and friends");
    Todo todo_c("Uninstall Python", "Reason - it's not popular more");
    auto* view_full_name = new FullNameViewer;
    auto* view_description = new DescriptionViewer;
    vector<string> result_1;
    vector<string> result_2;
    aspect_a.Accept(view_full_name, result_1);
    aspect_b.Accept(view_full_name, result_1);
    project_a.Accept(view_description, result_2);
    task_a.Accept(view_description, result_2);
    task_b.Accept(view_description, result_2);

    for (auto& str: result_1) {
        std::cout << str << '\n';
    }
    for (auto& str: result_2) {
        std::cout << str << '\n';
    }
}