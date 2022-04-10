#include "Task.h"

#include <utility>

Task::Task(string name, string descr = "", string short_name = "",
           Aspect* parent = nullptr, const vector<Note*>& children = {}) :
           Project(std::move(name), std::move(descr),
                   std::move(short_name), parent, children) {}

Task::~Task() = default;
