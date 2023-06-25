/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:03:09 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/23 13:40:46 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(){
}

Serialize::~Serialize(){

}

Serialize &Serialize::operator=(const Serialize &){ 
    return *this;
}

Serialize::Serialize(const Serialize &){
    
}

static uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

static Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data data = {"mohammed","general"};
    Data* ptr = deserialize(serialize(&data));
    std::cout << *ptr << std::endl;

    if (ptr == &data)
        std::cout << "POINTER IS THE SAME GUYS MOVE ON" << std::endl;
    else
        std::cout << "PROBLEM :POINTER IS FUCKED .. " << std::endl;
}

std::ostream&	operator<<( std::ostream& os, const Data& obj)
{
	os << obj.job << " " << obj.name;
	return os;
}