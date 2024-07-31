/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:05:23 by damendez          #+#    #+#             */
/*   Updated: 2024/07/31 15:47:09 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/*
 * 	Why is the exercise called polymorphism?
 *		Polymorphism occurs when the methods of inherted classes perform
 *		different tasks, Cat and Dog are derived classes of base class Animal,
 *		and they have their own implementations of makeSound().
 *
 * 	Why is the destructor of Animal virtual?
 * 		Virtual destructors are necesary when we want to delete an instance of a
 * 		derived class (Cat/Dog) through a pointer to base class (Animal)
 * 		
 * 		Animal *b = new Cat();
 *		delete b; // will lead to undefined behaviour if not virtual
 * 	
 * 	Why is makeSound() virtual void?
 * 		Since makeSound() is declared within base class Animal and is re-defined 
 * 		by derived classes Cat and Dog, and we want ensure that the correct function
 * 		is called for an object, it's necesary to use virtual.
 */
class Animal
{
    protected:
        std::string type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );
        Animal ( const Animal& old );
        Animal& operator=( const Animal& rhs );

        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;      
};

#endif
