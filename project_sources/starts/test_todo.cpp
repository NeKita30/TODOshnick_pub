#include "Todo.h"

int main() {
    Todo td("to make tp project", "to make todoshnik with patterns", "MK-PR");
    std::cout << td.get_name() << '\n' << td.get_description() << '\n' << td.get_name('s') << '\n';
}