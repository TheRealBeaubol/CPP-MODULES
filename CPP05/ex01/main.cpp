/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:23:51 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/02 18:17:09 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "\n\033[1;34m---- Default Constructor for Form ----\033[0m\n";
    try {
        Form form1;
        std::cout << "\033[1;32mForm created with default constructor: " << form1 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Form creation with default constructor: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Constructor with Parameters (Valid) ----\033[0m\n";
    try {
        Form form2("FormA", 50, 100);
        std::cout << "\033[1;32mForm created with name 'FormA', grade to sign 50, and grade to execute 100: " << form2 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Form creation with parameters: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Constructor with Parameters (Invalid GradeTooHighException) ----\033[0m\n";
    try {
        Form form3("FormB", 0, 100);  // Grade too high
    } catch (const Form::GradeTooHighException &e) {
        std::cout << "\033[1;31mException caught during creation of Form with too high grade: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Constructor with Parameters (Invalid GradeTooLowException) ----\033[0m\n";
    try {
        Form form4("FormC", 200, 100);  // Grade too low
    } catch (const Form::GradeTooLowException &e) {
        std::cout << "\033[1;31mException caught during creation of Form with too low grade: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Signing a Form with a Bureaucrat ----\033[0m\n";
    try {
        Bureaucrat bureaucrat1("Alice", 50);
        Form form5("FormD", 50, 100);
        
        std::cout << "\033[1;32mBureaucrat created: " << bureaucrat1 << "\033[0m" << std::endl;
        std::cout << "\033[1;32mBefore signing: " << form5 << "\033[0m" << std::endl;
        bureaucrat1.signForm(form5); // Bureaucrat with grade 50 can sign the form
        
        std::cout << "\033[1;32mAfter signing: " << form5 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during signing process: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Bureaucrat's Grade Too Low to Sign a Form ----\033[0m\n";
    try {
        Bureaucrat bureaucrat2("Bob", 150);
        Form form6("FormE", 50, 100);
        
        std::cout << "\033[1;32mBefore signing: " << form6 << "\033[0m" << std::endl;
        bureaucrat2.signForm(form6); // Bureaucrat with grade 150 cannot sign the form
        
        std::cout << "\033[1;32mAfter signing (should not have signed): " << form6 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during signing process: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Copying a Form ----\033[0m\n";
    try {
        Form form7("FormF", 100, 150);
        Form form8 = form7; // Copying the form
        
        std::cout << "\033[1;32mOriginal Form: " << form7 << "\033[0m" << std::endl;
        std::cout << "\033[1;32mCopied Form: " << form8 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Form copy: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[1;34m---- Assigning a Form ----\033[0m\n";
    try {
        Form form9("FormG", 20, 30);
        Form form10("FormH", 80, 90);
        
        form10 = form9; // Assignment
        
        std::cout << "\033[1;32mOriginal Form: " << form9 << "\033[0m" << std::endl;
        std::cout << "\033[1;32mForm after assignment: " << form10 << "\033[0m" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "\033[1;31mError during Form assignment: " << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}
