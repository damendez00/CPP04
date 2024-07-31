/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:05:23 by damendez          #+#    #+#             */
/*   Updated: 2024/07/31 15:46:14 by damendez         ###   ########.fr       */
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
        virtual ~Animal( void );
        Animal ( const Animal& old );
        Animal& operator=( const Animal& rhs );
        
        std::string     getType( void ) const;      
        virtual void    makeSound( void ) const;
        virtual void    getIdeas( void ) const;
};

#endif
