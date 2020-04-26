#ifndef AGENDA_H
# define AGENDA _ H
# include "Contact.hpp"

class Agenda {
    public:
        Contact contacts[8];

        Agenda(void);
        ~Agenda(void);

        void addContact();
        void searchContact() const ;
        void displayAgenda() const ;
    private:
        int _contactCount;
};

#endif