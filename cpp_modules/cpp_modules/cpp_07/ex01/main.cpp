/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:39:25 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/23 18:15:37 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_integer(int x) {
    std::cout << x + 1 << std::endl;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};

    iter(array, sizeof(array) / sizeof(array[0]), print_integer);
}