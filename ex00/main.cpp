/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:17:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 14:00:15 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
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
    std::cout << "meta: " << meta->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;
}