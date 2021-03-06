/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:54:08 by safernan          #+#    #+#             */
/*   Updated: 2022/05/17 22:44:55 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main (void)
{
	ClapTrap claptrap("Michel");

	claptrap.attack("Fourchette");

	claptrap.attack("epee");
	claptrap.takeDamage(5);
	
	claptrap.attack("pistolet");
	claptrap.takeDamage(5);
	
	claptrap.attack("YOUPI");
	claptrap.beRepaired(10);
}