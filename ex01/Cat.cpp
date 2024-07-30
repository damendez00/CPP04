/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:43:17 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 17:53:19 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {
    std::cout << this->getType() << " constructor called" << std::endl;
    this->_brain = new Brain;
}

Cat::~Cat( void ) {
    std::cout << this->getType() << " destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat( const Cat& old ) : Animal(old) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = old;
}

Cat &Cat::operator=( const Cat& rhs ) {
    if (this != &rhs) {
        this->type = rhs.getType();
        this->_brain = new Brain;
    }
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << "Meow !" << std::endl;
}

void    Cat::printIdeas( int i ) const {
    std::cout << this->_brain->getIdeas(i) << std::endl;
}

void    Cat::getIdeas( void ) const {
    int i = 0;
    
    while (i < 100) {
        this->printIdeas(i);
        i++;
    }
}