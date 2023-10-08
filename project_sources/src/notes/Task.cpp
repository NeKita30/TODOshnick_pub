#include "Task.h"
#include "Viewer.h"
#include <utility>

Task::Task(string name, string descr, string short_name,
           Note* parent, const vector<Note*>& children) :
           Project(std::move(name), std::move(descr),
                   std::move(short_name), parent, children) {};

void Task::Accept(Viewer* viewer, vector<string>& output) {
    viewer->ViewTask(this, output);
}