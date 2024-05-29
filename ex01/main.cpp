#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string x;
	PhoneBook 	phbIn;
	Contact		ctcIn;
	int i = 1;

	while (42)
	{
		if (i > 8)
			i = 1;
		std::cout << "please enter an input" << std::endl;
		std::cin >> x;
		if (x == "ADD")
		{
			phbIn.SetContact(i);
			i++;
		}
		else if (x == "SEARCH")
			phbIn.ContactSearch(i);
		else if (x == "EXIT")
			return 0;
		else
			std::cout << "wrong input" << std::endl;
		// phbIn.
	}
}

// essayer de trouver comment rendre cette excercice plus "c++"