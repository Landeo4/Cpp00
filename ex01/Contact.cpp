#include "Contact.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

void Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::setNickName(std::string nick_name)
{
	this->_nick_name = nick_name;
}

void Contact::setPhoneNumber(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string Contact::getFirstName(void)
{
	return (this->_first_name);
}

std::string Contact::getLastName(void)
{
	return (this->_last_name);
}

std::string Contact::getNickName(void)
{
	return (this->_nick_name);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->_phone_number);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->_darkest_secret);
}

void Contact::print_data(std::string str)
{
	int i = 0;

	if (str.length() > 10)
	{
		while (i < 9)
		{
			std:: cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		while (str[i])
			i++;
		std:: cout << std::setw(11 - i);
		i = 0;
		while (str[i])
		{
			std::cout << str[i];
			i++;
		}
	}
}
