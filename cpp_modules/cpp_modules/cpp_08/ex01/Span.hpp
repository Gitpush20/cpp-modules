/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:50:13 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 21:47:30 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

class Span{
    private:
        unsigned int _N;
        std::vector<int> numbers;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &);
        Span &operator=(const Span &);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void Storm_numbers();
};


#endif