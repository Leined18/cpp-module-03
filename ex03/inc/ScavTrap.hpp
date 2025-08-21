#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/**
 * Clase ScavTrap
 * Hereda de ClapTrap y añade el modo guardia.
 */
class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate();
};

#endif
