#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( std::string name ) {
	setName( name );
	setHitPoints( 100 );
	setEnergyPoints(50);
	setAttackDamage( 20 );
	setEnteredMode(false);
	std::cout << "SC4V-TP <" << _name << "> has been created by constructor" <<std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << _name << "> has been destroyed by destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "Character details : " << std::endl
	<< "\tclass: \t\tSV4V-TP" << std::endl 
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

void	ScavTrap::guardGuate( void ) {
	std::cout << "SC4V_TP <" << _name << "> has entered in Gate Keeper mode. He steals 20 HP !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	ScavTrap::setEnteredMode( bool const state ) {
	_is_guate_keeper_mode = state;
}

bool	ScavTrap::getEnteredMode( void ) const {
	return (_is_guate_keeper_mode);
}
/* ************************************************************************** */