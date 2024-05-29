#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int PhoneBook::SetContact(int &i)
{
	std::string x;

	if (i > 8)
		i = 1;
	std::cout << "voici mon index" << i << std::endl;
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
	int j = 1;

	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	while (j < i)
	{
		std::cout << "|" << std::setw(10) << j << "|";
		this->_contact[j].print_data(this->_contact[j].getFirstName());
		std::cout << "|";
		this->_contact[j].print_data(this->_contact[j].getLastName());
		std::cout << "|";
		this->_contact[j].print_data(this->_contact[j].getNickName());
		std::cout << "|" << std::endl;
		// std::cout << "|" << std::setw(10) << this->_contact[j].getFirstName();
		// std::cout << "|" << std::setw(10) << this->_contact[j].getLastName();
		// std::cout << "|" << std::setw(10) << this->_contact[j].getNickName();
		j++;
	}
	std:: string x;
	std::cout << "juste avant 8"
	std::cin >> x; // verif nb entrer
	std:: cout << "test pour 8";
	if (x[0] < 48 || x[0] > 57)
	{
		std::cout << "problem with your index" << std::endl;
		return (1);
	}
	if (x.length() > 1)
	{
		std:: cout << "please enter a good index" << std::endl;
		return (1);
	}
	else if (x[0] == '9')
	{
		std:: cout << "please enter a good index" << std::endl;
		return (1);
	}
	std:: cout << "test pour savoir 8";
	int index = x[0] - 48;
	std:: cout << "first name: " << this->_contact[index].getFirstName() << std::endl;
	std:: cout << "last name: " << this->_contact[index].getLastName() << std::endl;
	std:: cout << "Nick name: " << this->_contact[index].getNickName() << std::endl;
	std:: cout << "Phone number: " << this->_contact[index].getPhoneNumber() << std::endl;
	std:: cout << "Darkest secret: " << this->_contact[index].getDarkestSecret() << std::endl;
	// this->is_executed = 1;
	return (0);
	//print toute les infos de la recherche (iomanip)
	//pour construire mon tab je dois:
	// faire une liste de 4 colonne avec iomanip
}

// *nomVariable*.lenght

// pour gerer overflow verif la len que je recoit
// penser a gerer les tabs