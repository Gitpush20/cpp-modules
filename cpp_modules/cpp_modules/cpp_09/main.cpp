/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:21:12 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/25 18:59:12 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
bool is_valid_date_val(std::string date, float value) {
    if (value < INT_MIN){
        std::cout << "Error: number is too small.\n";
        return false;
    }
      if (value > INT_MAX){
        std::cout << "Error: too large a number.\n";
        return false;
    }
    if (value < 0){
        std::cout << "Error : not a positive number.\n";
        return false;
    }

  int year, month, day;
  if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) {
    std::cout << "Error: bad input => "<< date << "\n";
    return false;
  }

  if (year < 1000 || year > 9999) {
    std::cout << "year off limit\n";
    return false;
  }

  if (month < 1 || month > 12) {
    std::cout << "month off limit\n";
    return false;
  }

  if (day < 1 || day > 31) {
    std::cout <<"day off limit\n";
    return false;
  }
  return true;
}

int main(int ac, char **av)
{
    if (ac ==2)
    {
        std::string filename = av[1];
        std::map<std::string, float> data;
        std::ifstream inputfile(filename);
        if (!inputfile){
            std::cout<<"could not open file.\n";
            return(1);
        }
        std::ifstream data_("data.csv");
        if (!data_)
        {
            std::cout << "data corrupted\n";
            return 1;
        }
        std::string data_line;
        char ch;
        while (data_.get(ch) && ch != '\n');
        while(getline(data_,data_line)){
            const char* del = ",";
            char* date_cs = const_cast<char*>(data_line.c_str());
            char* token = std::strtok(date_cs, del);
            std::cout << token << std::endl;
            std::string date_data = token;
            token = std::strtok(NULL, del);
            float price = std::stof(token);
            data[date_data] = price;
            //std::cout << date_data<<"\n";
        }
        std::string line;
        while(getline(inputfile,line)){
            
            const char* delim = "|";
            char* date_cstr = const_cast<char*>(line.c_str());
            char* t = std::strtok(date_cstr, delim);
            std::cout << " \n";
            std::string d = t;
            t = std::strtok(NULL, delim);
            float price = std::stof(t);
            if (!is_valid_date_val(d,price)){
                continue;
            }
            else{
                bool is_in_map = data.find(d) != data.end();
                std::cout << d << "-----" << data[d]<<"\n";
                if (is_in_map)
                    std::cout << d<< "=> " << t << " = " << price * data[d]<<"\n";
            }

        }

        // for (std::map<std::string, float>::iterator im = prices.begin(); im != prices.end();++im)
        //     std::cout << im->first<< "=====>" << im->second << "\n";
    return 0;
        
    }
    else    
        std::cout << "Usage ./btc filename  \n";
    return 0;
}