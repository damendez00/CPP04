/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:08:03 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 14:11:45 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "WrongAnimal" ) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& old ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = old;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal& rhs ) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* WrongAnimal sounds *" << std::endl;
}
