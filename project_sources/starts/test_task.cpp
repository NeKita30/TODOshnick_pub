#include <iostream>

#include "Task.h"
#include "Todo.h"

int main() {
    Todo td1("name_aaaa");
    Todo td2("bbbb_name");
    vector<Note*> c = {&td1, &td2};
    Task tsk(c, "task_1", "lalalalala", "TK-1");
    std::cout << tsk.get_name('s') << '\n';
    std::cout << tsk.get_name('n') << '\n';
    std::cout << tsk.get_name();
}