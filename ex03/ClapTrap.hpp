#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		virtual	~ClapTrap();
		ClapTrap &		operator=( ClapTrap const & rhs );

		// Methods
		void			attack( std::string const & target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		// Getters and Setters
		std::string		getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;
		void			setName( std::string const name );
		void			setHitPoints( unsigned int const amount);
		void			setEnergyPoints( unsigned int const amount);
		void			setAttackDamage( unsigned int const amount);

	protected :
		std::string	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */