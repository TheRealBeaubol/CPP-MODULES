/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:15:17 by lboiteux          #+#    #+#             */
/*   Updated: 2024/09/29 18:13:39 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Constructor

Contact::Contact(void) {
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

// Destructor

Contact::~Contact(void) { std::cout << "Contact détruit !" << std::endl;}

// Getters

std::string Contact::getFirstName(void) const { return firstName; }
std::string Contact::getLastName(void) const { return lastName; }
std::string Contact::getNickName(void) const { return nickName; }
std::string Contact::getPhoneNumber(void) const { return phoneNumber; }
std::string Contact::getDarkestSecret(void) const { return darkestSecret; }

// Setters

void Contact::setFirstName(std::string str) { firstName = str; }
void Contact::setLastName(std::string str) { lastName = str; }
void Contact::setNickName(std::string str) { nickName = str; }
void Contact::setPhoneNumber(std::string str) { phoneNumber = str; }
void Contact::setDarkestSecret(std::string str) { darkestSecret = str; }
