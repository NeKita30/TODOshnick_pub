#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H

#include "Note.h"

class Aspect: public Note {
public:
    Aspect(string name, string descr, string short_n);
    ~Aspect();
    string GetName(char mode) const;
    string GetDescription(char mode) const;
    vector<Note*> Split();
    NoteStatus GetStatus() const;
    void ChangeBar(NoteStatus new_bar);
    void Complete();
    void Add(Note* new_note);
    float GetBar() const;
private:
    vector<Note*> children_;
    float bar_;
};
#endif //TODOSHNICK_ASPECT_H
