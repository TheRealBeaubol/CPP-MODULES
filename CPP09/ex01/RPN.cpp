/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:30:55 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/19 16:49:33 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

int charToInt(char c) {
    return c - '0';
}

void RPN::calculate(std::string str) {
    std::stack<double> stack;
    std::stringstream ss(str);
    std::string token;

    while (ss >> token) {
        char c = token[0];
        if (stack.size() < 2 && (c == '+' || c == '-' || c == '*' || c == '/')) {
            std::cout << "Error: not enough operands" << std::endl;
            return;
        } else if (c >= '0' && c <= '9') {
            stack.push(charToInt(c));
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            switch (c) {
                case '+' : {
                    stack.push(b + a);
                    break;
                }
                case '-' : {
                    stack.push(b - a);
                    break;
                }
                case '*' : {
                    stack.push(b * a);
                    break;
                }
                case '/' : {
                    if (a == 0) {
                        std::cout << "Error: division by zero" << std::endl;
                        return;
                    }
                    stack.push(b / a);
                    break;
                }
            }
        } else {
            std::cout << "Error: invalid RPN expression" << std::endl;
            return;
        }
    }
    switch (stack.size()) {
        case 0 : {
            std::cout << "Error: no operands" << std::endl;
            return;
        }
        case 1 : {
            std::cout << stack.top() << std::endl;
            break;
        }
        default : {
            std::cout << "Error: too many operands" << std::endl;
            return;
        }
    }
}