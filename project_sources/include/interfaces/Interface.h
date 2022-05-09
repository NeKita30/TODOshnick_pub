#ifndef INTERFACE_H
#define INTERFACE_H

#include "Note.h"
#include "Aspect.h"
#include "Project.h"
#include "Task.h"
#include "Todo.h"

#include "Viewer.h"
#include "ShortNameViewer.h"
#include "FullNameViewer.h"
#include "DescriptionViewer.h"
#include "RecursiveFull.h"
#include "StatusBarViewer.h"
#include "RecursiveAllInfo.h"

#include <unordered_map>
using std::unordered_map;


class Interface {
public:
    virtual void GetRequest() = 0;
    virtual void SendAnswer(const vector<string>& output) = 0;
private:
    vector<Note*> roots_;
    unordered_map<string, Note*> sh_name_to_note;

    void Complete(Note* note);
    void Start(Note* note);
    void Bind(Aspect* parent, Note* child);
    Note* FindByShortName(const string& name);
    void Add_Note(const vector<string>& request);
    vector<string> Choose_Viewer(const vector<string>& request);
    vector<string> View(Viewer* viewer, Note* note);
    Aspect* Add_Aspect(string name, string description, const string& short_n, const vector<Note*>& child);
    Project* Add_Project(string name, string description, const string& short_n, const vector<Note*>& child, Aspect* parent);
    Task* Add_Task(string name, string description, string short_n, const vector<Note*>& child, Aspect* parent);
    Todo* Add_Todo(string name, string description, string short_n, Aspect* parent);

    static vector<string> SplitRequest(const string& request, char sep);

protected:
    void RequestProcessing(const vector<string>& request);
};


#endif // INTERFACE_H
