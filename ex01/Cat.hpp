/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:15:27 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 16:56:30 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Cat : public Animal
{
    private:
        Brain   *_brain;
    public:
        Cat( void );
        ~Cat( void );
        Cat( const Cat& old );
        Cat &operator=( const Cat& rhs );
        
        void    makeSound( void ) const;
};

#endif