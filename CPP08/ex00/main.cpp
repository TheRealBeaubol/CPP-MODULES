/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:49:21 by lboiteux          #+#    #+#             */
/*   Updated: 2025/01/21 17:59:05 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp" // Assurez-vous que la fonction `easyfind` est définie ici

int main() {
    std::cout << "\033[1;33m=== Testing easyfind ===\033[0m\n" << std::endl;

    // Test avec un vecteur
    std::cout << "\033[1;36m[TEST WITH VECTOR = {1, 2, 3, 4, 5}]\033[0m" << std::endl;
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    try {
        std::cout << "Looking for 3 in vector: ";
        int result = easyfind(vec, 3);
        std::cout << "\033[1;32mFound:\033[0m " << result << std::endl;
    } catch (std::exception &e) {
        std::cout << "\033[1;31mNot Found\033[0m: " << e.what() << std::endl;
    }

    // Test avec une liste
    std::cout << "\n\033[1;36m[TEST WITH LIST = {10, 20, 30, 40}]\033[0m" << std::endl;
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    try {
        std::cout << "Looking for 25 in list: ";
        int result = easyfind(lst, 25);
        std::cout << "\033[1;32mFound:\033[0m " << result << std::endl;
    } catch (std::exception &e) {
        std::cout << "\033[1;31mNot Found\033[0m: " << e.what() << std::endl;
    }

    // Test avec une deque
    std::cout << "\n\033[1;36m[TEST WITH DEQUE = {100, 200, 300, 400}]\033[0m" << std::endl;
    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);
    deq.push_back(400);
    try {
        std::cout << "Looking for 300 in deque: ";
        int result = easyfind(deq, 300);
        std::cout << "\033[1;32mFound:\033[0m " << result << std::endl;
    } catch (std::exception &e) {
        std::cout << "\033[1;31mNot Found\033[0m: " << e.what() << std::endl;
    }

    return 0;
}
