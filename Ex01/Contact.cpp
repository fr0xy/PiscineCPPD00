#include <iostream>
#include "Agenda.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void) {
    return;
}

void Contact::setContact() {
    std::cout << "Firstname : ";
    std::cin >> this->firstName;
    std::cout << "lastName : ";
    std::cin >> this->lastName;
    std::cout << "nickName : ";
    std::cin >> this->nickName;
    std::cout << "login : ";
    std::cin >> this->login;
    std::cout << "postalAddress : ";
    std::cin >> this->postalAddress;
    std::cout << "email : ";
    std::cin >> this->email;
    std::cout << "phoneNumber : ";
    std::cin >> this->phoneNumber;
    std::cout << "birthday : ";
    std::cin >> this->birthday;
    std::cout << "favoriteMeal : ";
    std::cin >> this->favoriteMeal;
    std::cout << "underwearColor : ";
    std::cin >> this->underwearColor;
    std::cout << "darkestSecret : ";
    std::cin >> this->darkestSecret;
}

void Contact::displayContact() const {
    std::cout << this->firstName << std::endl;
    std::cout << this->lastName << std::endl;
    std::cout << this->nickName << std::endl;
    std::cout << this->login << std::endl;
    std::cout << this->postalAddress << std::endl;
    std::cout << this->email << std::endl;
    std::cout << this->phoneNumber << std::endl;
    std::cout << this->birthday << std::endl;
    std::cout << this->favoriteMeal << std::endl;
    std::cout << this->underwearColor << std::endl;
    std::cout << this->darkestSecret << std::endl;
}