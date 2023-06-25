/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:39:07 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 13:45:31 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> vi(10);
    std::fill(vi.begin(), vi.end(), 10);
    for (unsigned long i = 0; i<vi.size();i++)
        std::cout << vi[i] << std::endl;
    easyfind(vi,10);


    std::list<int> li;
    std::fill(li.begin(), li.end(), 10);
    std::list<int>::iterator iter;
    for (std::list<int>::iterator iter = li.begin(); iter != li.end(); ++iter) {
        std::cout << "???\n";
        std::cout << *iter << std::endl;
    }
    easyfind(vi,10);
    return 0;
}