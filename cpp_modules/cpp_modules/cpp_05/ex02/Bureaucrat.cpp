/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:39:53 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/22 15:23:04 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
     if (this == &other) {
            return *this;
        }
    std::cout << "Bureaucrat assignation operator called" << std::endl;
        this->grade = other.grade;
        this->name = other.name;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (os);
}

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->grade = grade;
    this->name = name;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade >150)
        throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const{
    return (this->grade);
}

int Bureaucrat::grade_incre(int grade){
    return grade-=1;
}

int Bureaucrat::grade_decre(int grade){
    return grade+=1;
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}