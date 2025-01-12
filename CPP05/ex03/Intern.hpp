/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:24:28 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/04 15:52:56 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern {
    public:
        Intern();
        Intern(const Intern &intern);
        Intern &operator=(const Intern &other);
        virtual ~Intern();
        
        AForm *createPresidentialPardonForm(const std::string target);
        AForm *createRobotomyRequestForm(const std::string target);
        AForm *createShrubberyCreationForm(const std::string target);
        AForm *makeForm(const std::string name, const std::string target);
        
        class FormNotFoundException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif