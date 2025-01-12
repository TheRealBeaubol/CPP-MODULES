/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:45:13 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/07 17:38:02 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Data *Serializer::deserialize(uintptr_t *raw) {
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t *Serializer::serialize(Data *data) {
    return (reinterpret_cast<uintptr_t *>(data));
}