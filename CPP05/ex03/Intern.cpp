/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:24:20 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/04 16:41:38 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &intern) {
    *this = intern;
}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm *Intern::createPresidentialPardonForm(const std::string target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(const std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string name, const std::string target) {
    const std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (Intern::*formCreators[3])(const std::string) = {
        &Intern::createPresidentialPardonForm, 
        &Intern::createRobotomyRequestForm, 
        &Intern::createShrubberyCreationForm
    };
    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << " form" << std::endl;
            return (this->*formCreators[i])(target);
        }
    }
    throw Intern::FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw() {
    return "Form not found";
}