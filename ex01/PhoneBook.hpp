#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
	public:
	PhoneBook(void);
	int setContact(int i);
	void setIsExecuted();
	void setFirstOccurence(int set);
	int getFirstOccurence();
	int getIsExecuted();
	int ContactSearch(int i);
	~PhoneBook(void);

	private:
	Contact	_contact[8];
	int is_executed;
	int	first_occurence;
};

#endif