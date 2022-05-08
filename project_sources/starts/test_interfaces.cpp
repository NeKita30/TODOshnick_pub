#include "InteractiveRTInterface.h"

int main() {
    InteractiveRTInterface interface;
    interface.SendAnswer(interface.HELP);
    interface.GetRequest();
}