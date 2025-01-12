/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:43:19 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/07 17:52:47 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data *data = new Data();
    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";

    std::cout << "Data before serialization:" << std::endl;
    std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n: " << data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl;

    uintptr_t *raw = Serializer::serialize(data);
    Data *data2 = Serializer::deserialize(raw);

    std::cout << "Data after serialization:" << std::endl;
    std::cout << "s1: " << data2->s1 << std::endl;
    std::cout << "n: " << data2->n << std::endl;
    std::cout << "s2: " << data2->s2 << std::endl;

    delete data;
    return 0;
}