/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:17:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/31 16:18:43 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
    std::cout << "[--- SUBJECT TESTS ---]" << std::endl;
    const   Animal* meta = new Animal();
    const   Animal* j = new Dog();
    const   Animal* i = new Cat();
    
    std::cout << "[--- Type Tests ---]" << std::endl;
    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    std::cout << "meta: " << meta->getType() << " " << std::endl;
    
    std::cout << "[--- Sound Tests ---]" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << "\n[--- EXTRA TESTS ---]" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();
    const WrongCat* wrongI = new WrongCat();

    std::cout << "[--- Type Tests ---]" << std::endl;
    std::cout << "wrongmeta: " << wrongMeta->getType() << " " << std::endl;
    std::cout << "wrongJ Type: " << wrongJ->getType() << " " << std::endl;
    std::cout << "wrongI Type: " << wrongI->getType() << " " << std::endl;
    
    std::cout << "[--- Sound Tests ---]" << std::endl;
    wrongMeta->makeSound();  
    wrongJ->makeSound();
    wrongI->makeSound();
    

    delete  wrongMeta;
    delete  wrongJ;
    delete  wrongI;
}
