#ifndef TODOSHNICK_ASPECT_H
#define TODOSHNICK_ASPECT_H
//class Aspect;
#include "Note.h"
//#include "Viewer.h"
class Viewer;

class Aspect: public Note {
public:
    Aspect(string name, string descr = "", string short_n = "", const vector<Note*>& children = {});
    void Complete() override;
    void Accept(Viewer* viewer, vector<string>& output) override;
    void Start() override;
    void Add(Note* new_note);
    void ChildUpdate() override;
    void ChangeParent(Note* new_parent) override;
    string GetName(char mode) const override;
    string GetDescription(char mode) const override;
    NoteStatus GetStatus() const override;
    int GetBar() const;
protected:
    void ChangeBar(int new_bar);
    vector<Note*> children_;
    int bar_;
    int bar_step_;
};

#endif //TODOSHNICK_ASPECT_H
