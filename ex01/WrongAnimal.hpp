/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:04:54 by damendez          #+#    #+#             */
/*   Updated: 2024/07/31 16:14:21 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
	protected:
		std::string type;
        
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		virtual ~WrongAnimal( void );
		WrongAnimal( const WrongAnimal& old );
        WrongAnimal	&operator=( const WrongAnimal& rhs );
        
		std::string	getType(void) const;
		void makeSound(void) const;
};

#endif