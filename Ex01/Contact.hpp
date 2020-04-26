#ifndef AGENDA_H
# define AGENDA _ H

class Contact {
    public:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string postalAddress;
        std::string email;
        std::string phoneNumber;
        std::string birthday;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;

        Contact(void);
        ~Contact(void);

        void setContact();
        void displayContact() const;
    private:
};

#endif