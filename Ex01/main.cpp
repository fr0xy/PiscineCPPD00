#include <iostream>
#include "Agenda.hpp"

int main() {
    std::string command;
    Agenda agenda;
    while (command.compare("EXIT") != 0) {
        std::cout << "Please enter a command : ";
        std::cin >> command;
        if (command.compare("ADD") == 0) {
            agenda.addContact();
        }
        if (command.compare("SEARCH") == 0) {
            agenda.searchContact();
        }
    }
    return (0);
}
