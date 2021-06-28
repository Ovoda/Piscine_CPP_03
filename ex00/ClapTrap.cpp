#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( void ) : _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "FR4G-TP a new ClapTrap has been created by default constructor, give it a name !" <<std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "FR4G-TP <" << _name << "> has been created by constructor" <<std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "FR4G-TP <" << _name << "> has been created by copy constructor" <<std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "FR4G-TP <" << _name << "> has been destroyed by destructor" <<std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs.getName();
		_hit_points = rhs.getHitPoints();
		_energy_points = rhs.getEnegeryPoints();
		_attack_damage = rhs.getAttackDamage();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "FR4G-TP details : " << std::endl
	<< "\tname : \t\t" << i.getName() << std::endl
	<< "\thit points : \t" << i.getHitPoints() << std::endl
	<< "\tenergy points : " << i.getEnegeryPoints() << std::endl
	<< "\tattack damage : " << i.getAttackDamage() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack( std::string const & target ) {
	std::cout
		<< "FR4G-TP <"
		<< _name
		<< "> attacks <"
		<< target
		<< ">, causing <"
		<< _attack_damage
		<< "> points of damage!"
	<< std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (amount > _hit_points)
		_hit_points = 0;
	else
		_hit_points -= amount;
	std::cout
		<< "FR4G-TP <"
		<< _name
		<< "> has been hit, he lost <"
		<< amount
		<< "> Hit Points, remaining : <"
		<< _hit_points
		<< ">"
	<< std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_hit_points >= 10)
	{
		std::cout << "FR4G-TP <" << _name << "> already full health !" << std::endl;
		return ;
	}
	if (_hit_points + amount >= 10)
		_hit_points = 10;
	else
		_hit_points = _hit_points + amount;
	std::cout
		<< "FR4G-TP <"
		<< _name
		<< "> has been healed, he gained <"
		<< amount
		<< "> Hit Points, remaining : <"
		<< _hit_points
		<< ">"
	<< std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ClapTrap::getName( void ) const {
	return (_name);
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return (_hit_points);
}

unsigned int	ClapTrap::getEnegeryPoints( void ) const {
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
	return (_attack_damage);
}

void	ClapTrap::setName( std::string const name) {
	_name = name;
}

void	ClapTrap::setHitPoints( unsigned int const amount ) {
	_hit_points = amount;
}

void	ClapTrap::setEnegeryPoints( unsigned int const amount ) {
	_energy_points = amount;
}

void	ClapTrap::setAttackDamage( unsigned int const amount ) {
	_attack_damage = amount;
}

/* ************************************************************************** */