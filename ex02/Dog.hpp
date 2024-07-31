/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:03:38 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 17:38:59 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Dog : public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog( void );
        ~Dog( void );
        Dog( const Dog& old );
        Dog &operator=( const Dog& rhs );
        
        void    makeSound( void ) const;
        void    printIdeas( int i ) const;
        void    getIdeas( void ) const;
};

#endif
