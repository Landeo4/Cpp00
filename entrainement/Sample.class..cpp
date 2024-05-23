#include "Phonebook.class.hpp"
#include "phonebook.h"

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42;
	std::cout << "voici foo " << this->foo << std::endl;

	this->bar();

	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Phonebook::bar( void )
{
	std::cout << "salut je fais du cpp" << std::endl;
}