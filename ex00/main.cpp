/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:30:28 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/21 12:30:29 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * Pruebas de ClapTrap
 */
int	main(void)
{
	ClapTrap c1("Bob");
	ClapTrap c2("Alice");
	c1.attack("Alice");
	c2.takeDamage(5);
	c2.beRepaired(3);
	c2.attack("Bob");
	c1.takeDamage(15); // debería quedar en 0 vida
	return (0);
}
