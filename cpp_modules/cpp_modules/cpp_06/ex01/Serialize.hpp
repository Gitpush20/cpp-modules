/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:03:53 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/23 11:02:34 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include <iostream>
#include <string>
#include <cstdint>

typedef struct s_Data
{
	const char*	name;
	const char*	job;
}	Data;

class Serialize{
    public:
        Serialize();
        ~Serialize();
        Serialize(const Serialize &);
        Serialize &operator=(const Serialize &);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
std::ostream&	operator<<( std::ostream& os, const Data& obj);

#endif