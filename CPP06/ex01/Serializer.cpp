/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:45:13 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/25 18:27:08 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &serializer) {
    (void)serializer;
}

Serializer &Serializer::operator=(const Serializer &other) {
    (void)other;
    return (*this);
}

Serializer::~Serializer() {}

Data *Serializer::deserialize(uintptr_t *raw) {
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t *Serializer::serialize(Data *data) {
    return (reinterpret_cast<uintptr_t *>(data));
}