/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:33:00 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/21 12:33:01 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &n) : ClapTrap(n)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "🛡 ScavTrap " << name << " creado!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "📋 ScavTrap copia creado!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "💥 ScavTrap " << name << " destruido!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "❌ ScavTrap " << name << " no puede atacar!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "⚔️ ScavTrap " << name << " ataca a " << target << " causando " << attackDamage << " puntos de daño!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "🛡 ScavTrap " << name << " está en modo Gate Keeper!" << std::endl;
}
