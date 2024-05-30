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
		phbIn.setIsExecuted();
		if (i > 7)
		{
			phbIn.setFirstOccurence(0);
			i = 1;
		}
		std::cout << "please enter an input" << std::endl;
		std::cin >> x;
		if (x == "ADD")
		{
			phbIn.setContact(i);
			// std::cout << "voici ma valeur" << phbIn.getIsExecuted();
			if (phbIn.getIsExecuted() == 0)
				return (0);
			i++;
		}
		else if (x == "SEARCH")
		{
			phbIn.ContactSearch(i);
			if (phbIn.getIsExecuted() == 0)
				return (0);
		}
		else if (x == "EXIT")
			return 0;
		else
			std::cout << "wrong input" << std::endl;
		// phbIn.
	}
}

//pour la partie replacement de mes ancienne valeurs je pourrai cree un second
// index qui a pour but de dire si tous mon tableau est remplis
// essayer de trouver comment rendre cette excercice plus "c++"