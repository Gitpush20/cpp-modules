/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:50:16 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 22:03:28 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N){
    this->_N = N;
}
Span::~Span(){}

Span::Span(const Span & ){}

Span &Span::operator=(const Span &){
    return *this;
}

void Span::addNumber(int number){
    if (_N > numbers.size())
        numbers.push_back(number);
    else
        std::cout<< "No more number can be added, we are full\n";
}

int Span::shortestSpan() {
    std::vector<int> sorted = numbers;

    std::sort(sorted.begin(), sorted.end());
    int min_span = sorted[1] - sorted[0];
    
    for (unsigned long i = 2; i < sorted.size(); i++){
        int span = sorted[i] - sorted[i - 1];
        if (span < min_span) {
            min_span = span;
        }
    }

      return min_span;
}

int Span::longestSpan() {
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

    return sorted[sorted.size()-1] - sorted[0];
    }

void Span::Storm_numbers(){
    numbers.insert(numbers.end(),100,1);
//     for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
//         std::cout<< *it <<"\n";
}