#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string x;
	PhoneBook 	phbIn;
	Contact		ctcIn;
	int i = 0;

	phbIn.setFirstOccurence(1);
	while (42)
	{
		if (i > 7)
		{
			phbIn.setFirstOccurence(0);
			i = 0;
		}
		std::cout << "please enter an input, it could be: ADD, SEARCH OR EXIT" << std::endl;
		std::cin >> x;
		if (!std::cin)
			exit(1);
		if (x == "ADD")
		{
			phbIn.setContact(i);
			i++;
		}
		else if (x == "SEARCH")
			phbIn.ContactSearch(i);
		else if (x == "EXIT")
			return 0;
		else
			std::cout << "wrong input" << std::endl;
	}
}
