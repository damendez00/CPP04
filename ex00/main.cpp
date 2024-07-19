/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:17:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/19 16:28:22 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    std::cout << "--- Animal Tests ---" << std::endl;

    const   Animal* meta = new Animal();
    const   Animal* j = new Dog();
    const   Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;
}