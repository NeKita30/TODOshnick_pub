#include "Note.h"
#include "Aspect.h"
#include "Project.h"
#include "Task.h"
#include "Todo.h"

#include <iostream>

int main() {
    Aspect a;
    Project p;
    Task t;
    Todo td;
    std::cout << a.test_note_structure() << '\n';
    std::cout << p.test_note_structure() << '\n';
    std::cout << t.test_note_structure() << '\n';
    std::cout << td.test_note_structure() << '\n';
}