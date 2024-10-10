/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:15:08 by lboiteux          #+#    #+#             */
/*   Updated: 2024/09/29 18:20:23 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(){
	Phonebook phonebook;
	std::string input;

	while (1) {
		std::cout << "Enter a command: (ex: ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD") {
			phonebook.addContact();
		}
		else if (input == "SEARCH") {
			phonebook.searchContact();
		}
		else if (input == "EXIT") {
			break;
		}
		else {
			std::cout << "Invalid command, try again !" << std::endl;
		}
	}
	return 0;
}