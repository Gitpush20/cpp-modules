/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:39:04 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 13:38:23 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>

template <typename T>
typename T::const_iterator easyfind(const T& container, int val) {
  for (typename T::const_iterator it =container.cbegin(); it != container.cend(); ++it) {
    if (*it == val) {
      std::cout <<"found\n";
      return it;
    }
  }
  std::cout << "the first occurrence of the second parameter not found \n";
  return container.cend();
}

#endif