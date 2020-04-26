#include <iostream>
#include <iomanip>
#include "Agenda.hpp"

Agenda::Agenda(void) : _contactCount(0) {
    return;
}

Agenda::~Agenda(void) {
    return;
}

void Agenda::addContact() {
    if (this->_contactCount > 7) {
        std::cout << "Agenda is full" << std::endl;
    }
    else {
        this->contacts[_contactCount].setContact();
        this->_contactCount++;
    }
}

void Agenda::searchContact() const {
    int i;
    displayAgenda();
    std::cout << "Please choose an index : ";
    std::cin >> i;
    if (i >= 0 && i < this->_contactCount) {
        this->contacts[i].displayContact();
    }
    else {
        std::cout << "Index invalid" << std::endl;
    }
}

void	displayField(std::string field) {
	if (field.size() > 10)
		std::cout << std::setw(9) << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::setfill(' ') << field;

	std::cout << '|';
}

void	displayIndex(int i) {
    std::cout << std::setw(10) << i;
	std::cout << '|';
}

void Agenda::displayAgenda() const {
    std::cout << "     Index|First Name| Last Name|    Pseudo|" << std::endl;
    for (int i = 0; i < this->_contactCount; i++)
    {
        displayIndex(i);
        displayField(this->contacts[i].firstName);
        displayField(this->contacts[i].lastName);
        displayField(this->contacts[i].login);
        std::cout << std::endl;
    }
    
}