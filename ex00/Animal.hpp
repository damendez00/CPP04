/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:05:23 by damendez          #+#    #+#             */
/*   Updated: 2024/07/19 16:11:31 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );    // ?
        
        Animal ( const Animal& src );
        Animal& operator=( const Animal& rhs );

        virtual void    makeSound( void ) const;    // ?
        std::string     getType( void ) const;      
};