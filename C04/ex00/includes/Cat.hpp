/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:24:08 by safernan          #+#    #+#             */
/*   Updated: 2022/05/20 00:58:15 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
 
# include <iostream>
# include "Animal.hpp"
 
class Cat : public Animal {

	public:
		Cat (void);
		Cat(Cat & cpy);
		~Cat (void);

		Cat & operator=(Cat const & rhs);

		virtual void makeSound(void) const;

	private:
	

};

#endif