/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:37:06 by lboiteux          #+#    #+#             */
/*   Updated: 2025/01/16 18:46:21 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
# define ARRAY_TPP
#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {};

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {};

template <typename T>
Array<T>::Array(const Array &array) {
    *this = array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
    if (this != &other) {
        _size = other.size();
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = other._array[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int n) {
    if (n >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _array[n];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

#endif