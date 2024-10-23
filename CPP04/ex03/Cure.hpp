/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:33:38 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:51:39 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(Cure const &cure);
        Cure &operator=(Cure const &other);
        virtual ~Cure();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif