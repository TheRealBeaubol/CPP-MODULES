/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:43:52 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/25 18:26:47 by lboiteux         ###   ########.fr       */
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
        Serializer(const Serializer &serializer);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
    public:
        static uintptr_t *serialize(Data *data);
        static Data *deserialize(uintptr_t *raw);
};

#endif