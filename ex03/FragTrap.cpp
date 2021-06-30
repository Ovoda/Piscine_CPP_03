#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( void ) {
	setHitPoints( 100 );
	setEnergyPoints( 100 );
	setAttackDamage( 30 );
	std::cout << "FR4G-TP a new unit has been created by constructor" <<std::endl;
}

FragTrap::FragTrap( std::string name ) {
	setName( name );
	setHitPoints( 100 );
	setEnergyPoints( 100 );
	setAttackDamage( 30 );
	std::cout << "FR4G-TP <" << _name << "> has been created by constructor" <<std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << _name << "> has been destroyed by destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "Character details : " << std::endl
	<< "\tclass: \t\tFR4G-TP" << std::endl 
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

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FR4G_TP <" << _name << "> just high fived his mate ! " << _name << " gains 5 attack damage !"
	<< std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */