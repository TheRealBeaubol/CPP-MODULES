/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:33:38 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:55:11 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(Ice const &ice);
        Ice &operator=(Ice const &other);
        virtual ~Ice();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif