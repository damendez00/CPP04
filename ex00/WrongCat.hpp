/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:12:16 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 14:15:51 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:
    
	public:
		WrongCat( void );
		WrongCat( const WrongCat& old );
		~WrongCat( void );
		WrongCat&	operator=( const WrongCat& rhs );
        
		void		makeSound( void ) const;
};

#endif
