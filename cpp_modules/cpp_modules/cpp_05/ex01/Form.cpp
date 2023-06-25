/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:58:27 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/22 17:19:20 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(int grade_sign, int grade_exe, std::string name) : name(name), grade_sign(grade_sign), grade_exe(grade_exe)
{
    std::cout << "Form constructor called" << std::endl;
    this->is_signed = false;
    if (grade_sign < 1 || grade_exe < 1)
        throw Form::GradeTooHighException();
    else if (grade_sign >150 || grade_exe > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& other)
{
    std::cout << "Form copy contructor called" << std::endl;
}

Form::Form()
{
    std::cout << "Form constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& b)
     os << b.getName() << std::endl;
{
    return (os);
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::string Form::getName() const
{
    return (this->name);
}
const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
    if (bureaucrat.getGrade() < getGradeSign()){
        throw GradeTooLowException();
    }
    if (isSigned()){
        throw GradeSignException();
    }
    
}