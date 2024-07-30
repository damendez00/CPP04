/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:43:17 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 13:53:13 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {
    std::cout << this->getType() << " constructor called" << std::endl;
}

Cat::~Cat( void ) {
    std::cout << this->getType() << " destructor called" << std::endl;
}

Cat::Cat( const Cat& old ) : Animal(old) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = old;
}

Cat &Cat::operator=( const Cat& rhs ) {
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << "Meow !" << std::endl;
}