#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	private:
		std::string	_name;

	public:

		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );
		//Getters and Setters
		void		setName( std::string const name );
		std::string	getName( void ) const;
		// Methods
		void		whoAmI( void ) const;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ******************************************************** DiamondTrap_HPP */