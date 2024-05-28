#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int PhoneBook::SetContact(int i)
{
	std::string x;

	std::cout << "Please set the first name" << std::endl;
	std::cin >> x;
	this->_contact[i].setFirstName(x);
	std::cout << "Please set the last name" << std::endl;
	std::cin >> x;
	this->_contact[i].setLastName(x);
	std::cout << "Please set the nickname" << std::endl;
	std::cin >> x;
	this->_contact[i].setNickName(x);
	std::cout << "Please set the Phone number" << std::endl;
	std::cin >> x;
	this->_contact[i].setPhoneNumber(x);
	std::cout << "Please set the darkest secret" << std::endl;
	std::cin >> x;
	this->_contact[i].setDarkestSecret(x);
	// std:: cout << "first name: " << this->_contact[i].getFirstName() << std::endl;
	// std:: cout << "last name: " << this->_contact[i].getLastName() << std::endl;
	// std:: cout << "Nick name: " << this->_contact[i].getNickName() << std::endl;
	// std:: cout << "Phone number: " << this->_contact[i].getPhoneNumber() << std::endl;
	// std:: cout << "Darkest secret: " << this->_contact[i].getDarkestSecret() << std::endl;
	// this->_contact[4].getFirstName();
	return 0;
}

int PhoneBook::ContactSearch(int i)
{
	int j = 0;

	while (j < i)
	{
		std::cout << "index: " << j;
		std::cout << std::setprecision(9);
		std::cout << "first name: " << this->_contact[j].getFirstName();
		std::cout << "last name: " << this->_contact[j].getLastName();
		std::cout << "nickname name: " << this->_contact[j].getNickName() << std::endl;
		j++;
	}
	int x;
	std::cin >> x;
	std:: cout << "first name: " << this->_contact[x].getFirstName() << std::endl;
	std:: cout << "last name: " << this->_contact[x].getLastName() << std::endl;
	std:: cout << "Nick name: " << this->_contact[x].getNickName() << std::endl;
	std:: cout << "Phone number: " << this->_contact[x].getPhoneNumber() << std::endl;
	std:: cout << "Darkest secret: " << this->_contact[x].getDarkestSecret() << std::endl;
	return (0);
	//print toute les infos de la recherche (iomanip)
	//pour construire mon tab je dois:
	// faire une liste de 4 colonne avec iomanip
}
// pour gerer overflow verif la len que je recoit
// penser a gerer les tabs