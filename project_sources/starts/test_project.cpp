#include <Todo.h>
#include <Task.h>

int main() {
    Todo td1("aaa");
    Todo td2("bbb");

    vector<Note*> c = {&td1, &td2};
    Task tsk1(c, "ababab");
    Task tsk2("weee");
    Todo td3("dedlain");
    vector<Note*> d = {&tsk1, &td3, &tsk2};
    Project prj(d, "RRR");
    std::cout << prj.get_name('a');
}
