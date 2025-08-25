/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:30:00 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/25 13:22:13 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "=============================" << std::endl;
	std::cout << "   Creación de objetos DiamondTrap" << std::endl;
	std::cout << "=============================" << std::endl;
	DiamondTrap fusion("FusionBot");
	DiamondTrap clone(fusion); // prueba copy constructor
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Prueba de ataque (heredado de ScavTrap)" << std::endl;
	std::cout << "=============================" << std::endl;
	fusion.attack("Target1");
	clone.attack("Target2");
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Prueba de habilidad especial whoAmI()" << std::endl;
	std::cout << "=============================" << std::endl;
	fusion.whoAmI();
	clone.whoAmI();
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Probar daño y reparación" << std::endl;
	std::cout << "=============================" << std::endl;
	fusion.takeDamage(40);  // recibe daño
	fusion.beRepaired(20);  // se repara
	fusion.takeDamage(200); // daño letal (vida llega a 0)
	fusion.beRepaired(10);  // no debería poder repararse
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Prueba de ataque y chaining con otro objeto" << std::endl;
	std::cout << "=============================" << std::endl;
	clone.attack("EnemyBot");
	clone.beRepaired(15);
	clone.takeDamage(50);
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Fin de main (se llaman destructores)" << std::endl;
	std::cout << "=============================" << std::endl;
	return (0);
}
