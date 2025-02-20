/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:31:05 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/20 17:47:52 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int charToInt(char c) {
    return c - '0';
}

int whichOperator(char c) {
    if (c == '+')
        return 0;
    if (c == '-')
        return 1;
    if (c == '*')
        return 2;
    if (c == '/')
        return 3;
    return -1;
}

int handleAddition(std::stack<double> &stack) {
    if (stack.size() < 2) {
        std::cout << "Error: Invalid expression" << std::endl;
        return -1;
    }
    double tmp = stack.top();
    stack.pop();
    tmp += stack.top();
    stack.pop();
    stack.push(tmp);
    return 0;
}

int handleSoustraction(std::stack<double> &stack) {
    if (stack.size() < 2) {
        std::cout << "Error: Invalid expression" << std::endl;
        return -1;
    }
    double tmp1 = stack.top();
    stack.pop();
    double tmp2 = stack.top();
    stack.pop();
    stack.push(tmp2 - tmp1);
    return 0;
}

int handleMultiplication(std::stack<double> &stack) {
    if (stack.size() < 2) {
        std::cout << "Error: Invalid expression" << std::endl;
        return -1;
    }
    double tmp = stack.top();
    stack.pop();
    tmp *= stack.top();
    stack.pop();
    stack.push(tmp);
    return 0;
}

int handleDivision(std::stack<double> &stack) {
    if (stack.size() < 2) {
        std::cout << "Error: Invalid expression" << std::endl;
        return -1;
    }
    double tmp = stack.top();
    stack.pop();
    tmp /= stack.top();
    stack.pop();
    stack.push(tmp);
    return 0;
}

int main(int ac, char **av) {

    if (ac != 2) {
        std::cout << "Usage: ./RPN [Polish mathematical expression]" << std::endl;
        return 1;
    }
    
    RPN rpn;
    std::stack<double> stack = rpn.getStack();

    int (*operations[4])(std::stack<double> &stack) = {handleAddition, handleSoustraction, handleMultiplication, handleDivision};
    int i = 0;

    while (av[1][i]) {
        if (av[1][i] == ' ')
            i++;
        if (av[1][i] >= '0' && av[1][i] <= '9')
            stack.push(charToInt(av[1][i++]));
        else if (whichOperator(av[1][i]) != -1) {
            if (operations[whichOperator(av[1][i])](stack) == -1)
                return -1;
            i++;
        }
        else {
            std::cout << "Error: Invalid character" << std::endl;
            return -1;
        }
    }
    if (stack.size() != 1)
        std::cout << "Error: Invalid expression" << std::endl;
    else
        std::cout << "Result: " << stack.top() << std::endl;
    return 0;
}