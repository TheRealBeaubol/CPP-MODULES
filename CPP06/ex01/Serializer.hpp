/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:43:52 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/07 17:51:35 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>

class Data {
    public:
        std::string s1;
        int n;
        std::string s2;
};

class Serializer {
    private:
        Serializer();
        ~Serializer();
    public:
        static uintptr_t *serialize(Data *data);
        static Data *deserialize(uintptr_t *raw);
};

#endif