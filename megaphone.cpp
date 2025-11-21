#include <iostream>
#include <string>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	for (size_t i = 0; i < strlen(av[1]); i++)
		std::cout <<  (char)std::toupper(av[1][i]);
	std:: cout << std::endl;
	return (0);
}
