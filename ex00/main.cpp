/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:30:28 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/25 12:50:16 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * Pruebas de ClapTrap
 */
int	main(void)
{
	// Creation
	std::cout << "========= CREATION ============" << std::endl;
	ClapTrap c1("Bob");
	ClapTrap c2("Alice");
	std::cout << "========= ACTIONS ============" << std::endl;
	c1.attack("Alice");
	c2.takeDamage(5);
	c2.beRepaired(3);
	c2.attack("Bob");
	c1.takeDamage(15); // debería quedar en 0 vida
	std::cout << "========= DESTRUCTION ============" << std::endl;
	return (0);
}
