#ifndef INTERACTIVERTINTERFACE_H
#define INTERACTIVERTINTERFACE_H

#include "Interface.h"

class InteractiveRTInterface: public Interface {
public:
    void GetRequest() override;
    void SendAnswer(const vector<string>& output) override;
    vector<string> HELP = {"Welcome to TODOshnick!",
                           "Commands for InteractiveRTInterface:",
                           "(every time you refer to already exiting note use short names)",
                           "1) To create new note:",
                           "new <type of note> <name> <short name> \"<description>\" [<supnote>] | [<subnotes>] run",
                           "Examples:",
                           "new A Education Edu \"Study at MIPT\" run",
                           "new P Math Mth \"Learning math and writing a diploma\" Edu run",
                           "new Td Flat flt \"Buying flat\" run",
                           "new Ts NewLivePlace NLP \"Find a new place to live\" | flt run",
                           "new P ImprovingLiveQuality ILQ \"Improve the quality of live for studying\" Edu | NLP run",
                           "--------------",
                           "2) To view information of note:",
                           "view <type of viewer> <short name> run",
                           "Examples:",
                           "view tree Edu run",
                           "view description ILQ run",
                           "--------------",
                           "3) To complete some note:",
                           "complete <short name> run",
                           "Examples:",
                           "complete flt run",
                           "--------------",
                           "Types of note:",
                           "A - aspect; P - project; Ts - Task; Td - TODO",
                           "Types of viewer:",
                           "tree - to view a tree struct of the note (with children);",
                           "full-tree - to tree with status, bars and descriptions;",
                           "short, status, description - to view short name, status or description respectively."};
    vector<string> ShortHELP =
            {"1) To create new note:",
             "new <type of note> <name> <short name> \"<description>\" [<supnote>] | [<subnotes>] run",
             "2) To view information of note:",
             "view <type of viewer> <short name> run",
             "3) To complete some note:",
             "complete <short name> run",
             "Types of note: A, P, Ts, Td;",
             "Types of viewer: tree, full-tree, short, status, description"};
};


#endif // INTERACTIVERTINTERFACE_H
