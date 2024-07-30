/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:27:08 by damendez          #+#    #+#             */
/*   Updated: 2024/07/30 16:59:55 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    protected:
        std::string _ideas[100];

    public:
        Brain();
        virtual ~Brain();
        Brain( const Brain& old );
        Brain &operator=( const Brain& rhs );

        std::string getIdeas( int i ) const;
};

#endif