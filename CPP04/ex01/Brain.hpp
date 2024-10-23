/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:01:28 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:11:09 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &other);
        virtual ~Brain();
        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

#endif