#include "Project.h"

#include <utility>

Project::Project(string name, string descr, string short_n) :
Aspect(std::move(name), std::move(descr), std::move(short_n)), children_(0), bar_(0) {};

Project::Project(const vector<Note*>& child, string name, string descr, string short_n) :
Aspect(std::move(name), std::move(descr), std::move(short_n)), children_(child), bar_(0) {};


Project::~Project() = default;