#ifndef INTERACTIVERTINTERFACE_H
#define INTERACTIVERTINTERFACE_H

#include "Interface.h"

class InteractiveRTInterface: public Interface {
public:
    void GetRequest() override;
    void SendAnswer(const vector<string>& output) override;
    vector<string> HELP{};
};


#endif // INTERACTIVERTINTERFACE_H
