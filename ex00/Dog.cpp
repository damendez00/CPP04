/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:09:27 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 13:54:18 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
    std::cout << this->getType() << " constructor called" << std::endl;
}

Dog::~Dog( void ) {
    std::cout << this->getType() << " destructor called" << std::endl;
}

Dog::Dog( const Dog& old ) : Animal(old) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = old;
}

Dog &Dog::operator=(const Dog& rhs) {
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << "Woof woof !" << std::endl;
}