#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

/**
 * Clase ClapTrap
 * Representa un robot básico con puntos de vida, energía y daño.
 * Permite atacar, recibir daño y repararse.
 */
class ClapTrap
{
  protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

  public:
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
