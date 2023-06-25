/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:15:47 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/21 19:28:21 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    private:
         std::string name;
        int grade;
    public:  
        Bureaucrat();
        Bureaucrat(int grade,std::string name);
        Bureaucrat(const std::string name);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const ;
        int grade_incre(int grade);
        int grade_decre(int grade);
    public:
        class GradeTooHighException : public std::exception {
    public:
        virtual const char * what() const throw();

    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
        
#endif