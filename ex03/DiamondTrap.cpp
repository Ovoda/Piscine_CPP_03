#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap( std::string name ) {
	ClapTrap::setName( name );
	setName( name + "_clap_name" );
	setHitPoints( FragTrap::getHitPoints() );
	setEnergyPoints( ScavTrap::getEnergyPoints() );
	setAttackDamage( FragTrap::getHitPoints() );
	std::cout << "DI4M-TP <" << _name << "> (" << ClapTrap::getName() << ") has been created by constructor" <<std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DI4M-TP <" << _name << "> has been destroyed by destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << "Character details : " << std::endl
	<< "\tclass: \t\tDI4M-TP" << std::endl 
	<< "\tname : \t\t" << i.getName() << std::endl
	<< "\thit points : \t" << i.getHitPoints() << std::endl
	<< "\tenergy points : " << i.getEnergyPoints() << std::endl
	<< "\tattack damage : " << i.getAttackDamage() << std::endl;
	return o;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		DiamondTrap::whoAmI( void ) const {
	std::cout << "DI4M-TP <" << _name << "> <" << ClapTrap::getName() << "> ready for combat." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		DiamondTrap::setName( std::string const name ) {
	_name = name;
}

std::string	DiamondTrap::getName( void ) const {
	return (_name);
}

/* ************************************************************************** */