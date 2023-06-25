/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:47:09 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/05/15 05:15:02 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void contact::ADD(std::string first_name, std::string last_name, std::string nick_name, std::string dark_secrets, std::string number)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->dark_secrets = dark_secrets;
	this->number = number;
}
std::string contact::get_first_name(void)
{
	return this->first_name;
}
std::string contact::get_last_name(void)
{
	return this->last_name;
}
std::string contact::get_nick_name(void)
{
	return this->nick_name;
}
std::string contact::get_number(void)
{
	return this->number;
}
std::string contact::get_darksecrets(void)
{
	return this->dark_secrets;
}