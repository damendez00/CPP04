/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:05:23 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 14:03:21 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );    // ?
        Animal ( const Animal& src );
        Animal& operator=( const Animal& rhs );

        virtual void    makeSound( void ) const; // method declared by base class and re-defined by derived class
        std::string     getType( void ) const;      
};

#endif