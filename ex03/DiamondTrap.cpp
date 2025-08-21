/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:41:39 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/21 12:41:40 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &n) : ClapTrap(n + "_clap_name"),
	FragTrap(n), ScavTrap(n), name(n)
{
	hitPoints = FragTrap::hitPoints; // ok ahora, porque ClapTrap es único
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "💎 DiamondTrap " << name << " creado!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
	FragTrap(other), ScavTrap(other)
{
	*this = other;
	std::cout << "📋 DiamondTrap copia creado!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other); // ahora ya no es ambiguo
		name = other.name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "💥 DiamondTrap " << name << " destruido!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "🤔 Soy DiamondTrap " << name << " y mi ClapTrap se llama " << ClapTrap::name << std::endl;
}
