/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:23:51 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/03 17:27:03 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    std::cout << "\n\033[1;34m---- Test Default Constructor for Bureaucrat ----\033[0m\n";
    try {
        Bureaucrat bureaucrat1;
        std::cout << "\033[1;32mBureaucrat created with default constructor: " << bureaucrat1 << "\033[0m\n";
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Bureaucrat creation: " << e.what() << "\033[0m\n";
    }

    std::cout << "\n\033[1;34m---- Test Parameterized Constructor for Bureaucrat ----\033[0m\n";
    try {
        Bureaucrat bureaucrat2("Alice", 42);
        std::cout << "\033[1;32mBureaucrat created: " << bureaucrat2 << "\033[0m\n";
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Bureaucrat creation: " << e.what() << "\033[0m\n";
    }

    std::cout << "\n\033[1;34m---- Test Constructor with Invalid Grade ----\033[0m\n";
    try {
        Bureaucrat bureaucrat3("Bob", 0); // Grade too high
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cout << "\033[1;31mCaught exception: " << e.what() << "\033[0m\n";
    }
    try {
        Bureaucrat bureaucrat4("Charlie", 151); // Grade too low
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cout << "\033[1;31mCaught exception: " << e.what() << "\033[0m\n";
    }

    std::cout << "\n\033[1;34m---- Test Form Signing ----\033[0m\n";
    try {
        Bureaucrat bureaucrat5("Diana", 45);
        PresidentialPardonForm form1("Target1");
        std::cout << "\033[1;32mBureaucrat: " << bureaucrat5 << "\033[0m\n";
        std::cout << "\033[1;32mForm before signing: " << form1 << "\033[0m\n";
        bureaucrat5.signAForm(form1);
        std::cout << "\033[1;32mForm after signing: " << form1 << "\033[0m\n";
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during signing: " << e.what() << "\033[0m\n";
    }

    std::cout << "\n\033[1;34m---- Test Execution of ShrubberyCreationForm ----\033[0m\n";
    try {
        Bureaucrat bureaucrat6("Edward", 5);
        ShrubberyCreationForm form2("HomeGarden");
        bureaucrat6.signAForm(form2);
        bureaucrat6.executeForm(form2);
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during form execution: " << e.what() << "\033[0m\n";
    }

    std::cout << "\n\033[1;34m---- Test Execution of RobotomyRequestForm ----\033[0m\n";
    try {
        Bureaucrat bureaucrat7("Frank", 10);
        RobotomyRequestForm form3("RobotTarget");
        bureaucrat7.signAForm(form3);
        bureaucrat7.executeForm(form3);
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during form execution: " << e.what() << "\033[0m\n";
    }

    std::cout << "\n\033[1;34m---- Test Copy Constructor for Form ----\033[0m\n";
    try {
        PresidentialPardonForm form4("OriginalTarget");
        PresidentialPardonForm form5 = form4; // Copy
        std::cout << "\033[1;32mOriginal Form: " << form4 << "\033[0m\n";
        std::cout << "\033[1;32mCopied Form: " << form5 << "\033[0m\n";
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during form copy: " << e.what() << "\033[0m\n";
    }

    return 0;
}

