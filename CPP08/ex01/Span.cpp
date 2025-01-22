/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:05:15 by lboiteux          #+#    #+#             */
/*   Updated: 2025/01/22 17:27:28 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0), _size(0) {}

Span::Span(unsigned int n) : _n(n), _size(0) {}

Span::Span(const Span &span) {
    *this = span;
}


Span &Span::operator=(const Span &other) {
    if (this == &other) {
        _n = other._n;
        _size = other._size;
        _data = other._data;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
    if (_size >= _n) {
        throw ExceedCapacityException();
    }
    _data.push_back(n);
    _size++;
}

int Span::shortestSpan() {
    if (_size <= 1) {
        throw NoSpanFound();
    }
    std::vector<int> vec = _data;
    std::sort(vec.begin(), vec.end());
    int min = INT_MAX;
    for (unsigned int i = 0; i < _size - 1; i++) {
        if (vec[i + 1] - vec[i] < min) {
            min = vec[i + 1] - vec[i];
        }
    }
    return min;
}

int Span::longestSpan() {
    if (_size <= 1) {
        throw NoSpanFound();
    }
    std::vector<int> vec = _data;
    std::sort(vec.begin(), vec.end());
    return vec[_size - 1] - vec[0];
}
