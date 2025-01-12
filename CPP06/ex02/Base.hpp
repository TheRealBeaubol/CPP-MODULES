/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:59:11 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/11 16:11:33 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <typeinfo>
# include <ctime>

class Base {
    public:
        virtual ~Base() {};
};

void identify(Base &p);
void identify(Base *p);
Base *generate(void);

#endif