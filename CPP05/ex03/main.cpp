/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:23:51 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/04 16:56:52 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    std::cout << "\033[1;34m---- TEST CONSTRUCTORS AND METHODS ----\033[0m" << std::endl;

    // Test de création du formulaire avec un intern
    try {
        Intern intern1;
        AForm *form = intern1.makeForm("robotomy request", "Bender");
        std::cout << "\033[1;32mForm created successfully.\033[0m" << std::endl;
        delete form;  // Libération de la mémoire
    } catch (const Intern::FormNotFoundException &e) {
        std::cout << "\033[1;31mError: " << e.what() << "\033[0m" << std::endl;
    }
    try {
        Intern intern2;
        AForm *form = intern2.makeForm("predidential pardon", "John");
        std::cout << "\033[1;32mForm created successfully.\033[0m" << std::endl;
        delete form;  // Libération de la mémoire
    } catch (const Intern::FormNotFoundException &e) {
        std::cout << "\033[1;31mError: " << e.what() << "\033[0m" << std::endl;
    }
    try {
        Intern intern3;
        AForm *form = intern3.makeForm("shrubbery creation", "Bob");
        std::cout << "\033[1;32mForm created successfully.\033[0m" << std::endl;
        delete form;  // Libération de la mémoire
    } catch (const Intern::FormNotFoundException &e) {
        std::cout << "\033[1;31mError: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- TEST CREATION OF NON-EXISTENT FORM ----\033[0m" << std::endl;

    // Test de la création d'un formulaire non existant
    try {
        Intern intern4;
        AForm *form = intern4.makeForm("nonexistent form", "Target");
        delete form;
    } catch (const Intern::FormNotFoundException &e) {
        std::cout << "\033[1;31mError: " << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}
