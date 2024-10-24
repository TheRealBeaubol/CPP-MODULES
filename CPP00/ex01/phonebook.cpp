#include "phonebook.hpp"
# include <iomanip>

// Constructor

Phonebook::Phonebook(void) { contactCount = 0; }

// Destructor

Phonebook::~Phonebook(void) { std::cout << "Phonebook détruit !" << std::endl; }

void	Phonebook::addContact(void) {
	Contact newContact;
	std::string input;

	std::cout << "Enter First name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);
	
	std::cout << "Enter Last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	newContact.setNickName(input);

	std::cout << "Enter Phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter Darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);
	
	if (contactCount < 8) {
		contacts[contactCount] = newContact;
		contactCount++;
	}
	else {
		contacts[contactCount % 8] = newContact;
		contactCount++;
	}
}

std::string AddSpace(int size) {
	std::string space = "";
	while (size--){
		space += " ";
	}
	return space;
}

void	Phonebook::searchContact(void){
	int i = 0;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < contactCount && i < 8) {
		std::cout << "|" << AddSpace(9) << i + 1;
		std::string firstName = contacts[i].getFirstName();
		if (firstName.size() > 9) {
			firstName = firstName.substr(0, 9) + ".";
		}
		std::cout << "|" << AddSpace(10 - firstName.size()) << firstName;
		std::string lastName = contacts[i].getLastName();
		if (lastName.size() > 9) {
			lastName = lastName.substr(0, 9) + ".";
		}
		std::cout << "|" << AddSpace(10 - lastName.size()) << lastName;
		std::string nickName = contacts[i].getNickName();
		if (nickName.size() > 9) {
			nickName = nickName.substr(0, 9) + ".";
		}
		std::cout << "|" << AddSpace(10 - nickName.size()) << nickName ;
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "+-------------------------------------------+" << std::endl;
    std::cout << "Select an index to display details (or a number out of range to cancel): ";
	
	std::string input;
    std::getline(std::cin, input);
	if (input.size() == 1 && input[0] >= '1' && input[0] <= '8') {
	    int index = input[0] - 1 - '0';
		if (index >= 0 && index < contactCount && index < 8) {
			std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
			std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
			std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl; 
		}
	}
	else { std::cout << "Invalid index selected." << std::endl;
	}
}
    