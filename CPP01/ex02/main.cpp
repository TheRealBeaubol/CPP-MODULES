/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:59:40 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/05 15:06:20 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string     str = "HI THIS IS BRAIN";
    std::string     *stringPTR = &str;
    std::string     &stringREF = str;

    std::cout << "========[Printing Adresses]========" << std::endl ;
    std::cout << &str << std::endl ;
    std::cout << stringPTR << std::endl ;
    std::cout << &stringREF << std::endl << std::endl;
    std::cout << "========[Printing Strings Content]========" << std::endl ;
    std::cout << str << std::endl ;
    std::cout << *stringPTR << std::endl ;
    std::cout << stringREF << std::endl ;
}