/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:24:32 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/24 09:25:34 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class Array {
  private:
    T* data;
    unsigned int _size;

  public:
    Array() {
      data = nullptr;
      _size = 0;
    }

    Array(unsigned int n) {
      data = new T[n];
      for (unsigned int i = 0; i < n; i++) {
        data[i] = T();
      }
      _size = n;
    }

    Array(const Array& other) {
      data = new T[other.size];
      for (unsigned int i = 0; i < other._size; i++) {
        data[i] = other.data[i];
      }
      _size = other.size;
    }

    Array& operator=(const Array& other) {
      if (this == &other) {
        return *this;
      }

      delete[] data;
      data = new T[other.size];
      for (unsigned int i = 0; i < other._size; i++) {
        data[i] = other.data[i];
      }
      _size = other._size;
      return *this;
    }

    T& operator[](unsigned int index) {
      if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
      }
      return data[index];
    }

    unsigned int size() const {
      return _size;
    }
};


#endif