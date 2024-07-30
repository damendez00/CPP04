/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:28:43 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 17:05:21 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ){
    type = "Animal";
    std::cout << this->type << " Default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type( type ) {
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal( const Animal& old ) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = old;
}

Animal& Animal::operator=( const Animal& rhs )
{
    if ( this != &rhs ) {
        this->type = rhs.type;
    }
    return (*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return (this->type);
}

void Animal::getIdeas( void ) const {
    std::cout << "I don't have a brain ;-;" << std::endl;
}