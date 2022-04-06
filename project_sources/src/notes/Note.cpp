#include "Note.h"

#include <utility>

Note::Note(string name, string descr = "", string short_n = "") :
name_(std::move(name)), description_(std::move(descr)), short_name_(std::move(short_n)), status_(NOTSTARTED), parent_(nullptr) {}

Note::~Note() = default;