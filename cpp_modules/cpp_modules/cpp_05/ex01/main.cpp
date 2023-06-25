/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:37:30 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/22 11:52:04 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    int grade = 156;
    Bureaucrat k(2,"mme");
    Form o(grade,1,"form");
    std::cout << k.signForm(o) << std::endl;
    // std::cout <<  << std::endl;
    // int grade = 0;
    // Bureaucrat a;
    // std::cout << a.grade_incre(grade)<< std::endl;
    // // try {
    // //     Bureaucrat b(151, "John Doe");
    // // } catch (Bureaucrat::GradeTooHighException& e) {
    // //     std::cout << e.what() << std::endl;
    // // }

    // try {
    //     Bureaucrat b(grade, "Jane Doe");
    // } catch (std::exception& e) {
    //     std::cout << e.what() << std::endl;
    // }
    // //Bureaucrat b(grade, "Jane Doe");
    // return 0;
}