#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap( std::string name ) {
	setName( name );
	setHitPoints( 100 );
	setEnergyPoints( 100 );
	setAttackDamage( 30 );
	std::cout << "FR4G-TP <" << _name << "> has been created by constructor" <<std::endl;
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
	std::cout << "FR4G-TP <" << _name << "> has been destroyed by destructor" << std::endl;
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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */