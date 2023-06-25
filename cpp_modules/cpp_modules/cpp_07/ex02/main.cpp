/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:16:56 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 09:33:38 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
 
  Array<int> intArray(5);
  intArray[0] = 10;
  intArray[1] = 20;
  intArray[2] = 30;
  intArray[3] = 40;
  intArray[4] = 50;


  for (unsigned int i = 0; i < intArray.size(); i++) {
    std::cout << intArray[i] << " ";
  }
  std::cout << std::endl;

  
  Array<float> floatArray(3);
  floatArray[0] = 1.1f;
  floatArray[1] = 2.2f;
  floatArray[2] = 3.3f;

 
  for (unsigned int i = 0; i < floatArray.size(); i++) {
    std::cout << floatArray[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
