/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:47:06 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/05/15 05:12:58 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
class contact {
	public :
		void ADD(std::string first_name, std::string last_name, std::string nick_name, std::string dark_secrets,std::string number);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nick_name(void);
		std::string get_number(void);
		std::string get_darksecrets(void);
	private :
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string number;
		std::string dark_secrets;

};

#endif