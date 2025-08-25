/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:30:00 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/25 12:59:46 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=============================" << std::endl;
	std::cout << "   Creación de objetos ScavTrap" << std::endl;
	std::cout << "=============================" << std::endl;
	ScavTrap guardian("Guardian");
	ScavTrap defender("Defender");
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Prueba de ataque (heredado de ClapTrap)" << std::endl;
	std::cout << "=============================" << std::endl;
	guardian.attack("Enemy");
	defender.attack("Intruder");
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Uso de habilidad especial guardGate()" << std::endl;
	std::cout << "=============================" << std::endl;
	guardian.guardGate();
	defender.guardGate();
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Probar daño y reparación" << std::endl;
	std::cout << "=============================" << std::endl;
	guardian.takeDamage(20); // recibe daño
	guardian.beRepaired(10); // se repara
	guardian.takeDamage(90); // daño fatal (vida llega a 0)
	guardian.beRepaired(5);  // no debería poder repararse
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "   Fin de main (se llaman destructores)" << std::endl;
	std::cout << "=============================" << std::endl;
	return (0);
}
