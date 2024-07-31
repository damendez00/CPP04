/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:27:05 by damendez          #+#    #+#             */
/*   Updated: 2024/07/31 17:01:38 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "I don't have any idea";        
}

Brain::~Brain() {
    std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain( const Brain& old) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = old;
}

Brain &Brain::operator=( const Brain& rhs ) {
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &rhs) {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}

std::string Brain::getIdeas( int i ) const {
    return (this->ideas[i]);
}