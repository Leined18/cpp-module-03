/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:45:00 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/25 13:18:49 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=============================" << std::endl;
	std::cout << "   Creación de objetos ScavTrap y FragTrap" << std::endl;
	std::cout << "=============================" << std::endl;
	ScavTrap guardian("Guardian");
	ScavTrap defender("Defender");
	FragTrap happy("HappyBot");
	FragTrap crazy("CrazyBot");
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Prueba de ataques (heredado de ClapTrap)" << std::endl;
	std::cout << "=============================" << std::endl;
	guardian.attack("Intruder");
	defender.attack("Enemy");
	happy.attack("EvilBot");
	crazy.attack("Intruder");
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Uso de habilidades especiales" << std::endl;
	std::cout << "=============================" << std::endl;
	guardian.guardGate();
	defender.guardGate();
	happy.highFivesGuys();
	crazy.highFivesGuys();
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Probar daño y reparación" << std::endl;
	std::cout << "=============================" << std::endl;
	// ScavTrap recibe daño
	guardian.takeDamage(30);
	guardian.beRepaired(10);
	guardian.takeDamage(100); // debería llegar a 0 HP
	guardian.beRepaired(5);   // no debería poder repararse
	// FragTrap recibe daño
	happy.takeDamage(50);
	happy.beRepaired(20);
	happy.takeDamage(200); // daño letal
	happy.beRepaired(10);  // no debería repararse
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Fin de main (se llaman destructores)" << std::endl;
	std::cout << "=============================" << std::endl;
	return (0);
}
