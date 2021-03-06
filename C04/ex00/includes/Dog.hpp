/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:11 by safernan          #+#    #+#             */
/*   Updated: 2022/05/20 00:58:05 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
 
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog (void);
		Dog(Dog & cpy);
		~Dog (void);

		Dog & operator=(Dog const & rhs);

		virtual void makeSound(void) const;

	private:
	

};

#endif