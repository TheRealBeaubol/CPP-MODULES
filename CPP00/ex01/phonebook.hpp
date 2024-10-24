#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook {
    private:
        Contact contacts[8];
        int contactCount;
    public:
        Phonebook(void);	// Constructor
        ~Phonebook(void); // Destructor

    void addContact(void);
    void searchContact(void);
};

#endif