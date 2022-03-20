#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H

#include "Note.h"

class Aspect: public Note {
public:
    Aspect();
    string test_note_structure();
private:
    vector<Note> children_;
};
#endif //TODOSHNICK_ASPECT_H
