#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact{
	public:

	Contact(void);
	~Contact(void);
	void setFirstName(std::string first_name);
	void setLastName(std::string last_name);
	void setNickName(std::string nick_name);
	void setPhoneNumber(std::string phone_number);
	void setDarkestSecret(std::string darkest_secret);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);
	private:

	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif