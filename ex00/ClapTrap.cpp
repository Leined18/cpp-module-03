#include "ClapTrap.hpp"

/** Constructor con nombre */
ClapTrap::ClapTrap(const std::string &n) : name(n), hitPoints(10),
	energyPoints(10), attackDamage(0)
{
	std::cout << "🤖 ClapTrap " << name << " creado!" << std::endl;
}

/** Constructor de copia */
ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "📋 ClapTrap copia creado!" << std::endl;
}

/** Operador de asignación */
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

/** Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "💥 ClapTrap " << name << " destruido!" << std::endl;
}

/** Atacar a un objetivo */
void ClapTrap::attack(const std::string &target)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "❌ ClapTrap " << name << " no puede atacar!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "⚔️ ClapTrap " << name << " ataca a " << target << " causando " << attackDamage << " puntos de daño!" << std::endl;
}

/** Recibir daño */
void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "💢 ClapTrap " << name << " recibe " << amount << " puntos de daño!" << std::endl;
}

/** Repararse */
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "❌ ClapTrap " << name << " no puede repararse!" << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "🔧 ClapTrap " << name << " se repara " << amount << " puntos de vida!" << std::endl;
}
