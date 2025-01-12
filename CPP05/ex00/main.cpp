/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:23:51 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/02 17:40:31 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    std::cout << "\n\033[1;34m---- Default Constructor ----\033[0m\n";
    try {
        Bureaucrat bureaucrat1;
        std::cout << "\033[1;32mDefault Bureaucrat created: " << bureaucrat1 << "\033[0m" << std::endl;
    } 
    catch (const std::exception &e) {
        std::cout << "\033[1;31mError during default Bureaucrat creation: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Constructor with Parameters ----\033[0m\n";
    try {
        Bureaucrat bureaucrat2("Alice", 50);
        std::cout << "\033[1;32mBureaucrat created with name 'Alice' and grade 50: " << bureaucrat2 << "\033[0m" << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Bureaucrat creation with parameters: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Constructor with Exception (Grade too low) ----\033[0m\n";
    try {
        Bureaucrat bureaucrat3("Bob", 160); // Grade too low
    }
    catch (const Bureaucrat::GradeTooLowException &e) {
        std::cout << "\033[1;31mException caught during creation with too low grade: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Constructor with Exception (Grade too high) ----\033[0m\n";
    try {
        Bureaucrat bureaucrat4("Charlie", 0); // Grade too high
    }
    catch (const Bureaucrat::GradeTooHighException &e) {
        std::cout << "\033[1;31mException caught during creation with too high grade: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Incrementing and Decrementing Grade ----\033[0m\n";
    try {
        Bureaucrat bureaucrat5("David", 100);
        std::cout << "\033[1;32mBefore incrementing: " << bureaucrat5 << "\033[0m" << std::endl;
        bureaucrat5.incrementGrade(); // Grade = 99
        std::cout << "\033[1;32mAfter incrementing: " << bureaucrat5 << "\033[0m" << std::endl;
        bureaucrat5.decrementGrade(); // Grade = 100
        std::cout << "\033[1;32mAfter decrementing: " << bureaucrat5 << "\033[0m" << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException &e) {
        std::cout << "\033[1;31mException caught during incrementing: " << e.what() << "\033[0m" << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e) {
        std::cout << "\033[1;31mException caught during decrementing: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Incrementing and Decrementing Grade with Exceptions ----\033[0m\n";
    try {
        Bureaucrat bureaucrat6("John", 1);
        std::cout << "\033[1;32mBefore incrementing: " << bureaucrat6 << "\033[0m" << std::endl;
        bureaucrat6.incrementGrade(); // Grade = Exception
    }
    catch (const Bureaucrat::GradeTooHighException &e) {
        std::cout << "\033[1;31mException caught during incrementing: " << e.what() << "\033[0m" << std::endl;
    }
    try {
        Bureaucrat bureaucrat7("Ryan", 150);
        std::cout << "\033[1;32mBefore decrementing: " << bureaucrat7 << "\033[0m" << std::endl;
        bureaucrat7.decrementGrade(); // Grade = Exception
    }
    catch (const Bureaucrat::GradeTooLowException &e) {
        std::cout << "\033[1;31mException caught during decrementing: " << e.what() << "\033[0m" << std::endl;
    }
    
    std::cout << "\n\033[1;34m---- Copying a Bureaucrat ----\033[0m\n";
    try {
        Bureaucrat bureaucrat8("Eve", 10);
        Bureaucrat bureaucrat9 = bureaucrat8; // Copying the object

        std::cout << "\033[1;32mOriginal Bureaucrat: " << bureaucrat8 << "\033[0m" << std::endl;
        std::cout << "\033[1;32mCopied Bureaucrat: " << bureaucrat9 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Bureaucrat copy: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Assigning a Bureaucrat ----\033[0m\n";
    try {
        Bureaucrat bureaucrat10("Frank", 75);
        Bureaucrat bureaucrat11("George", 120);
        bureaucrat11 = bureaucrat10; // Assignment

        std::cout << "\033[1;32mOriginal Bureaucrat: " << bureaucrat10 << "\033[0m" << std::endl;
        std::cout << "\033[1;32mBureaucrat after assignment: " << bureaucrat11 << "\033[0m" << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Bureaucrat assignment: " << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}