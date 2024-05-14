#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	std:: string str;
	int i;
	int count = 1;

	if (argc == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (argc > count)
		{
			i = 0;
			while (i < (int)strlen(argv[count]))
			{
				if (argv[count][i] >= 97 && argv[count][i] <= 122)
				{
					str[i] = argv[count][i];
					str[i] = str[i] - (char)32;
				}
				i++;
			}
			int j = 0;
			while (j < i)
			{
				std :: cout << str[j];
				j++;
			}
			count++;
		}
	}
	std:: cout << std::endl;
}
