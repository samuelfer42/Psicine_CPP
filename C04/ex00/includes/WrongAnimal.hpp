/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:40:17 by safernan          #+#    #+#             */
/*   Updated: 2022/05/27 21:24:17 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
 
# include <iostream>
 
class WrongAnimal {

	public:
		WrongAnimal (void);
		WrongAnimal(WrongAnimal & cpy);
		virtual ~WrongAnimal (void);

		WrongAnimal & operator=(WrongAnimal const & rhs);

		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;
};

#endif