/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:34:08 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/25 13:13:27 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &n) : ClapTrap(n)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "🎉 FragTrap " << name << " creado!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "📋 FragTrap copia creado!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "💥 FragTrap " << name << " destruido!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "🙌 FragTrap " << name << " pide un high five positivo!" << std::endl;
}
