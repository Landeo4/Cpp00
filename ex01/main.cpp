#include "Contact.hpp"
#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string x;


	while (42)
	{
		std::cout << "please enter an input" << std::endl;
		std::cin >> x;
		if (x == "ADD")
			ft_add_contact();
		if (x == "SEARCH")
			
		if (x == "EXIT")
			return 0;
		else
			std::cout << "wrong input" << std::endl;
	}
	std:: cout << x << std::endl;
}
// essayer de trouver comment rendre cette excercice plus "c++"