/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:39:13 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:51:27 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria* _inventory[4];
    public:
        Character();
        Character(std::string const &name);
        Character(Character const &character);
        Character &operator=(Character const &other);
        virtual ~Character();

        virtual std::string const &getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif