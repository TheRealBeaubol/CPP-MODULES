/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:56:06 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/11 16:22:28 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

int main() {
    srand(time(NULL));
    std::cout << "\033[1;32m" << "Generating a random instance of Base:" << "\033[0m" << std::endl;
    Base *base = generate();
    std::cout << "\033[1;34m" << "Identifying the instance:" << "\033[0m" << std::endl;
    std::cout << "\033[1;35m" << "  -Pointer:" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m" << "      Actual type of the object: " << "\033[0;36m";
    identify(base);
    std::cout << "\033[1;35m" << "  -Address:" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m" << "      Actual type of the object: " << "\033[0;36m";
    identify(*base);
    std::cout << std::endl << "\033[1;32m" << "Generating a random instance of Base:" << "\033[0m" << std::endl;
    delete base;
    Base *base2 = generate();
    std::cout << "\033[1;34m" << "Identifying the instance:" << "\033[0m" << std::endl;
    std::cout << "\033[1;35m" << "  -Pointer:" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m" << "      Actual type of the object: " << "\033[0;36m";
    identify(base2);
    std::cout << "\033[1;35m" << "  -Address:" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m" << "      Actual type of the object: " << "\033[0;36m";
    identify(*base2);
    std::cout << std::endl << "\033[1;32m" << "Generating a NULL instance of Base:" << "\033[0m" << std::endl;
    delete base2;
    Base *base3 = NULL;
    std::cout << "\033[1;34m" << "Identifying the instance:" << "\033[0m" << std::endl;
    std::cout << "\033[1;35m" << "  -Pointer:" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m" << "      Actual type of the object: " << "\033[0;36m";
    identify(base3);
    std::cout << "\033[1;35m" << "  -Address:" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m" << "      Actual type of the object: " << "\033[0;36m";
    identify(*base3);
    return 0;
}