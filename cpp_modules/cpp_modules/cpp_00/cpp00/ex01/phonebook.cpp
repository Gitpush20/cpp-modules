/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:07:14 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/05/15 15:03:17 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
int phonebook::num_add(void) {
    int i(0);
    while (i < 8)
    {
        if (this->contacts[i].get_first_name().empty())
            return i;
        i++;
    }
    return 8;
}

void phonebook::SEARCH(void) {
    int i = 0;
    std::string index;
    while (true)
    {
        if (std::cin.eof())
            return;
        i = 0;
        if (this->num_add() == 0)
        {
            std::cout << "The table of indexes is empty" << std::endl;
            return;
        }
        while (i < this->num_add())
        {
            std::cout << i + 1;
            std::cout << "|";
            if (this->contacts[i].get_first_name().size() < 10)
                std::cout << this->contacts[i].get_first_name();
            else
            {
                std::cout << this->contacts[i].get_first_name().substr(0, 9);
                std::cout << ".";
            }
            std::cout << "|";
            if (this->contacts[i].get_last_name().size() < 10)
                std::cout << this->contacts[i].get_last_name();
            else
            {
                std::cout << this->contacts[i].get_last_name().substr(0, 9);
                std::cout << ".";
            }
            std::cout << "|";
            if (this->contacts[i].get_nick_name().size() < 10)
                std::cout << this->contacts[i].get_nick_name();
            else
            {
                std::cout << this->contacts[i].get_nick_name().substr(0, 9);
                std::cout << ".";
            }
            std::cout << std::endl;
            i++;
        }
        std::cout << std::endl << "index : ";
        getline(std::cin, index);
        if (index.length() == 1 && (index[0] - '0' >= 1 && index[0] - '0' <= num_add()))
        {
            std::cout << "First name : " << this->contacts[(index[0] - '0') - 1].get_first_name() << std::endl;
            std::cout << "Last name : " << this->contacts[(index[0] - '0') - 1].get_last_name() << std::endl;
            std::cout << "Nick name : " << this->contacts[(index[0] - '0') - 1].get_nick_name() << std::endl;
            std::cout << "Number : " << this->contacts[(index[0] - '0') - 1].get_number() << std::endl;
            std::cout << "Dark secret : " << this->contacts[(index[0] - '0') - 1].get_darksecrets() << std::endl;
            return ;
            
        }
        else
            std::cout << "index not found" << std::endl;
    }
}

int main() 
{
    phonebook mb;
    std::string first_name, last_name, nick_name, dark_secret, number, str; 
    int i = 0, j = 0;
    while (true)
    {
        if (std::cin.eof())
            break;
        std::cout << "Enter a command : ";
        getline(std::cin, str);
        if (str == "ADD")
        {
            if (i == 8)
                i = 0;
            std::cout << "First name : ";
            getline(std::cin, first_name);
            if (first_name.empty())
                continue;
            std::cout << "Last name : ";
            getline(std::cin, last_name);
            if (last_name.empty())
                continue;
            std::cout << "Nick name : ";
            getline(std::cin, nick_name);
            if (nick_name.empty())
                continue;
            std::cout << "Number : ";
            getline(std::cin, number);
            if (number.empty())
                continue;
            std::cout << "Dark secret : ";
            getline(std::cin, dark_secret);
            if (dark_secret.empty())
                continue;
            mb.contacts[i].ADD(first_name, last_name, nick_name, dark_secret, number);
            std::cout << first_name << " " << last_name << " added" << std::endl;
            i++;
        }
        else if (str ==  "SEARCH")
            mb.SEARCH();
        else if (str == "EXIT")
            break;
    }
    return 0;
}
