/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:14:41 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 14:16:16 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& old ) : WrongAnimal(old) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = old;
}

WrongCat &WrongCat::operator=(const WrongCat& rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong miaaaauuuuu..." << std::endl;
}