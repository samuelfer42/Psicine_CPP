/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:38:24 by safernan          #+#    #+#             */
/*   Updated: 2022/05/16 04:21:06 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:
		Fixed (void);
		Fixed (const int fixed_value);
		Fixed (const float float_value);
		Fixed(const Fixed &cpy);
		~Fixed (void);

		Fixed 	&operator= (const Fixed &value);
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
		
		float	toFloat (void) const;
		int		toInt(void) const;
	
	private:
		int					_fix_value;
		static const int	_f_bit = 8;
		
		
};

std::ostream &operator<<(std::ostream &cout, Fixed const &point_a);

#endif
