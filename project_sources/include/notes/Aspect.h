#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H

#include "Note.h"

class Aspect: public Note {
public:
    Aspect(string name, string descr, string short_n, const vector<Note*>& children);
    ~Aspect();
    void Complete() override;
    void Add(Note* new_note);
    void ChildUpdate();
    string GetName(char mode) const override;
    string GetDescription(char mode) const override;
    NoteStatus GetStatus() const override;
    float GetBar() const;
protected:
    void ChangeBar(float new_bar);
    vector<Note*> children_;
    float bar_;
    int bar_step_;
};
#endif //TODOSHNICK_ASPECT_H
