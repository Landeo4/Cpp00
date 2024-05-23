#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i;
	int count = 1;
	char	c;

	if (argc == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argc > 1)
	{
		while (count < argc)
		{
			i = 0;
			while (argv[count][i])
			{
				if (argv[count][i] >= 97 && argv[count][i] <= 122)
				{
					c = argv[count][i] - 32;
					std::cout << c;
				}
				else
					std::cout << argv[count][i];
				i++;
			}
			count++;
		}
	}
	std::cout << std::endl;
	return (0);
}
