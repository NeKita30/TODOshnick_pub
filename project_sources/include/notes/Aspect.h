#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H

#include "Note.h"

class Aspect: public Note {
public:
    Aspect(string name, string descr, string short_n, const vector<Note*>& children);
    ~Aspect();
    void ChangeBar(NoteStatus new_bar);
    void Complete() override;
    void Add(Note* new_note);
private:
    string GetName(char mode) const override;
    string GetDescription(char mode) const override;
    NoteStatus GetStatus() const override;
    float GetBar() const;
    vector<Note*> children_;
    float bar_;
};
#endif //TODOSHNICK_ASPECT_H
