/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:37:30 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/21 19:55:13 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    int grade = 0;
    Bureaucrat a;
    std::cout << a.grade_incre(grade)<< std::endl;
    // try {
    //     Bureaucrat b(151, "John Doe");
    // } catch (Bureaucrat::GradeTooHighException& e) {
    //     std::cout << e.what() << std::endl;
    // }

    try {
        Bureaucrat b(grade, "Jane Doe");
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    //Bureaucrat b(grade, "Jane Doe");
    return 0;
}