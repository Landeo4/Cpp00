#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact{
	public:

	Contact(void);
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	
	~Contact(void);

};

#endif