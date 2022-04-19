#include "Note.h"
#include "Aspect.h"
#include "Project.h"
#include "Task.h"
#include "Todo.h"


int main() {
    Aspect aspect_a("Study", "Projects for MSU education", "S");
    Aspect aspect_b("Live", "Work on live", "L");
    Project project_a("Python study", "Learning Python");
    Task task_a("Object-oriented programming study");
    Todo todo_a("Download books");
    Todo todo_b("Install Python");
    Task task_b("Find girl and friends");
    Todo todo_c("Uninstall Python", "Reason - it's not popular more");
    aspect_a.Add(&project_a);
    aspect_b.Add(&task_b);
    project_a.Add(&task_a);
    project_a.Add(&todo_b);
    task_a.Add(&todo_a);
    todo_a.Start();
    todo_b.Start();
    todo_a.Complete();
    project_a.Add(&todo_c);
    todo_b.Complete();
    todo_c.Complete();
}