/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:58:34 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/22 11:50:21 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
    private:
        const std::string name; 
        bool is_signed;
        const int grade_sign;
        const int grade_exe;
    public:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        }; 
    public:
        Form(int grade_sign, int grade_exe, std::string name);
        //Form();
        ~Form();
        Form(const Form& other);
        Form &operator=(const Form& other);
        std::string getName() const;
        bool getSign() const;
        int getGradeSign() const;
        int getGradeExe() const;
        void beSigned(Bureaucrat &Bureaucrat);
        //void execute(Bureaucrat const & executor) const;
        //virtual void action() const = 0;

};

std::ostream& operator<<(std::ostream& os, const Form& b);
#endif
