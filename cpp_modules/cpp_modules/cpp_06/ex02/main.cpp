/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:04:02 by mbel-bas          #+#    #+#             */
/*   Updated: 2023/06/23 14:23:16 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Base Destructor called" << std::endl;
}

void Base::identify(Base* p) {
    std::string type;

    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown" << std::endl;
    }
}

void Base::identify(Base& p) {
    std::string type;

    if (typeid(p) == typeid(A)) {
        std::cout << "A" << std::endl;
    } else if (typeid(p) == typeid(B)) {
        std::cout << "B" << std::endl;
    } else if (typeid(p) == typeid(C)) {
        std::cout << "C" << std::endl;
    } else {
        type = "Unknown";
    }

    std::cout << "The object pointed to by p is of type " << type << std::endl;
}

Base * Base::generate(void)
{
    int choise;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);
    choise = dis(gen);

    switch (choise){
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
    }
    return nullptr;
}

int main()
{
    Base b;
    Base *a = b.generate();
    b.identify(a);

    return 0;

}