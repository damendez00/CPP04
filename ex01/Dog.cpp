/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:09:27 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 17:57:01 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
    std::cout << this->getType() << " constructor called" << std::endl;
    this->_brain = new Brain;
}

Dog::~Dog( void ) {
    std::cout << this->getType() << " destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog( const Dog& old ) : Animal(old) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = old;
}

Dog &Dog::operator=(const Dog& rhs) {
    if (this != &rhs) {
        this->type = rhs.type;
        this->_brain = new Brain;
    }
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << "Woof woof !" << std::endl;
}

void    Dog::printIdeas( int i ) const {
    std::cout << this->_brain->getIdeas(i) << std::endl;
}

void    Dog::getIdeas( void ) const {
    int i = 0;
    
    while (i < 100) {
        this->printIdeas(i);
        i++;
    }
}