/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:50:18 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 22:02:01 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    Span span(10);
    span.addNumber(2);
    span.addNumber(1);
    span.addNumber(4);
    span.addNumber(3);
    span.addNumber(10);

    span.Storm_numbers();
    // for (std::vector<int>::iterator it = span.numbers.begin(); it != span.numbers.end(); ++it)
    //   std::cout<< *it <<"\n";
    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;

  return 0;
}
