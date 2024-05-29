#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
	public:
	PhoneBook(void);
	int SetContact(int i);
	void SetIsExecuted();
	int ContactSearch(int i);
	~PhoneBook(void);

	private:
	Contact	_contact[8];
	int is_executed;
};

#endif