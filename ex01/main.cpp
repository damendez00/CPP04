/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:17:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 17:42:20 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
    std::cout << "[--- ARRAY OF ANIMALS CREATION ---]" << std::endl;
	const Animal *Animals[4];
	Animals[0] = new Cat();
	Animals[1] = new Cat();
	Animals[2] = new Dog();
	Animals[3] = new Dog();
	
	const Animal *animal = new Animal();

    std::cout << "\n[--- DEEP COPIES TEST ---]" << std::endl;
	std::cout << "[ Type tests ]" << std::endl;
	std::cout <<  Animals[0]->getType() << " " << std::endl;
	std::cout <<  Animals[1]->getType() << " " << std::endl;
	std::cout <<  Animals[2]->getType() << " " << std::endl;
	std::cout <<  Animals[3]->getType() << " " << std::endl;

	std::cout << "[ Sounds test ]" << std::endl;
	Animals[0]->makeSound();
	Animals[1]->makeSound();
	Animals[2]->makeSound();
	Animals[3]->makeSound();

	std::cout << "[ Ideas test ]" << std::endl;
	std::cout << "Cat ideas: " << std::endl;
	Animals[0]->getIdeas();
	std::cout << "Dog ideas: " ;
	Animals[2]->getIdeas();
	std::cout << "Animal ideas: ";
	animal->getIdeas();

	int k;
	k = 0;
	std::cout << "[ DESTRUCTOR LOOP ]" << std::endl;
	while (k < 4)
	{
		delete Animals[k];
		k++;
	}
	delete animal;
}