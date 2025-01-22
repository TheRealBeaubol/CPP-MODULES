/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:00:33 by lboiteux          #+#    #+#             */
/*   Updated: 2025/01/22 17:26:01 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define GREEN_BOLD "\033[1;32m"
#define WHITE_BOLD "\033[1;37m"


int main() {
	std::cout << GREEN_BOLD << "=====Testing MutantStack=====" << RESET << std::endl;
	std::cout << GREEN_BOLD << "Creating MutantStack..." << RESET << std::endl;
	MutantStack<int> mstack;
	std::cout << BLUE << "      Pushing elements onto MutantStack..." << RESET << std::endl;
	std::cout << CYAN << "	  Adding 5 to MutantStack..." << RESET << std::endl;
	mstack.push(5);
	std::cout << RED << "	  Top element: " << RESET << mstack.top() << std::endl;
	std::cout << CYAN << " 	  Adding 17 to MutantStack..." << RESET << std::endl;
	mstack.push(17);
	std::cout << RED << "	  Top element: " << RESET << mstack.top() << std::endl;
	std::cout << YELLOW << "	Current size: " << RESET << mstack.size() << std::endl;
	std::cout << BLUE << "     Popping top element..." << RESET << std::endl;
	mstack.pop();
	std::cout << YELLOW << "	Current size: " << RESET << mstack.size() << std::endl;
	std::cout << BLUE << "	  Adding more elements to MutantStack..." << RESET << std::endl;
	std::cout << CYAN << "	  Adding 3 to MutantStack..." << RESET << std::endl;
	mstack.push(3);
	std::cout << CYAN << "	  Adding 5 to MutantStack..." << RESET << std::endl;
	mstack.push(5);
	std::cout << CYAN << "	  Adding 737 to MutantStack..." << RESET << std::endl;
	mstack.push(737);
	std::cout << CYAN << "	  Adding 0 to MutantStack..." << RESET << std::endl;
	mstack.push(0);
	std::cout << YELLOW << "	Current size: " << RESET << mstack.size() << std::endl;
	std::cout << BLUE << "     Iterating through MutantStack using iterators:" << RESET << std::endl;
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	++it1;
	--it1;
	while (it1 != ite1) {
		std::cout << WHITE_BOLD << "	  " << *it1 << RESET << std::endl;
		++it1;
	}
	std::cout << BLUE << "     Copying MutantStack to std::list..." << RESET << std::endl;
	std::stack<int> s1(mstack);
	std::cout << BLUE << "     Testing MutantStack with constant iterators..." << RESET << std::endl;
	MutantStack<int>::const_iterator cit1 = mstack.cbegin();
	while (cit1 != mstack.cend()) {
		std::cout << WHITE_BOLD << "	  " << *cit1 << RESET << std::endl;
		++cit1;
	}
	std::cout << GREEN_BOLD << "Testing MutantStack complete!" << RESET << std::endl << std::endl;

	std::cout << GREEN_BOLD << "=====Testing std::list=====" << RESET << std::endl;
	std::cout << GREEN_BOLD << "Creating std::list..." << RESET << std::endl;
	std::list<int> lstack;
	std::cout << BLUE << "      Pushing elements onto std::list..." << RESET << std::endl;
	std::cout << CYAN << "	  Adding 5 to std::list..." << RESET << std::endl;
	lstack.push_back(5);
	std::cout << RED << "	  Top element: " << RESET << lstack.front() << std::endl;
	std::cout << CYAN << "	  Adding 17 to std::list..." << RESET << std::endl;
	lstack.push_back(17);
	std::cout << RED << "	  Top element: " << RESET << lstack.front() << std::endl;
	std::cout << YELLOW << "	Current size: " << RESET << lstack.size() << std::endl;
	std::cout << BLUE << "      Removing front element..." << RESET << std::endl;
	lstack.pop_back();
	std::cout << YELLOW << "	Current size: " << RESET << lstack.size() << std::endl;
	std::cout << BLUE << "	  Adding more elements to std::list..." << RESET << std::endl;
	std::cout << CYAN << "	  Adding 3 to std::list..." << RESET << std::endl;
	lstack.push_back(3);
	std::cout << CYAN << "	  Adding 5 to std::list..." << RESET << std::endl;
	lstack.push_back(5);
	std::cout << CYAN << "	  Adding 737 to std::list..." << RESET << std::endl;
	lstack.push_back(737);
	std::cout << CYAN << "	  Adding 0 to std::list..." << RESET << std::endl;
	lstack.push_back(0);
	std::cout << YELLOW << "	Current size: " << RESET << lstack.size() << std::endl;
	std::cout << BLUE << "      Iterating through std::list using iterators:" << RESET << std::endl;
	std::list<int>::iterator it2 = lstack.begin();
	std::list<int>::iterator ite2 = lstack.end();
	++it2;
	--it2;
	while (it2 != ite2) {
		std::cout << WHITE_BOLD << "	  " <<  *it2 << RESET << std::endl;
		++it2;
	}
	std::cout << BLUE << "      Copying std::list to std::list..." << RESET << std::endl;
	std::list<int> s2(lstack);
	std::cout << BLUE << "      Testing std::list with constant iterators..." << RESET << std::endl;
	std::list<int>::const_iterator cit2 = lstack.begin();
	while (cit2 != lstack.end()) {
		std::cout << WHITE_BOLD << "	  " <<  *cit2 << RESET << std::endl;
		++cit2;
	}
	std::cout << GREEN_BOLD << "Testing std::list complete!" << RESET << std::endl;
	return 0;
}
