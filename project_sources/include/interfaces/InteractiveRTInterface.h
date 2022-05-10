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
                           "new P Math Mth \"Learning math and writing a diploma\" Edu run"};
};


#endif // INTERACTIVERTINTERFACE_H
