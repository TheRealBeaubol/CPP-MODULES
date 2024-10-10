/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:07:33 by lboiteux          #+#    #+#             */
/*   Updated: 2024/09/29 18:19:18 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook {
    private:
        Contact contacts[8];
        int contactCount;
    public:
        Phonebook(void);	// Constructor
        ~Phonebook(void); // Destructor

    void addContact(void);
    void searchContact(void);
};

#endif