#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class DiamondTrap : virtual public ClapTrap
{

	public:

		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );
		// Methods

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ******************************************************** DiamondTrap_HPP */