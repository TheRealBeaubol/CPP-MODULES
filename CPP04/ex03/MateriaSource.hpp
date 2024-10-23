/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:41:14 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:57:40 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _templates[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &materiasource);
        virtual ~MateriaSource();

        MateriaSource &operator=(MateriaSource const &other);
        
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const &type);
};

#endif