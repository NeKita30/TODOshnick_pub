#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H

#include "Note.h"

class Aspect: public Note {
public:
    Aspect(string name, string descr, string short_n);
    ~Aspect();
    string GetName(char mode);
    string GetDescription(char mode);
    vector<Note*> Split();
    note_status GetStatus();
    void ChangeStatus(NoteStatus new_status);
    void Complete();
    void Add(Note* new_note);
    float GetBar();
private:
    vector<Note> children_;
    float bar_;
};
#endif //TODOSHNICK_ASPECT_H
