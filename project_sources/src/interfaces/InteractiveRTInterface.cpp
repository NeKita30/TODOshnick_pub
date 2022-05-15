#include "InteractiveRTInterface.h"

void InteractiveRTInterface::GetRequest() {
    vector<string> request;
    bool getting_request = false;
    while (true) {
        string word;
        std::cin >> word;
        if (word == "exit") {
            break;
        }
        if (word == "new" || word == "complete" || word == "view") {
            request.clear();
            request.push_back(word);
            getting_request = true;
        } else if (word == "run") {
            RequestProcessing(request);
            request.clear();
            getting_request = false;
        } else if (getting_request) {
            if (word[0] == '\"') {
                string description = word + " ";
                while (word.back() != '\"') {
                    std::cin >> word;
                    description += word + " ";
                }
                request.push_back(description);
            } else {
                request.push_back(word);
            }
        } else {
            SendAnswer(ShortHELP);
        }
    }
}

void InteractiveRTInterface::SendAnswer(const vector<string>& output) {
    for (auto& str: output) {
        std::cout << str << '\n';
    }
}