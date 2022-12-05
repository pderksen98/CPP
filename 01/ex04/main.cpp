#include "Sed.hpp"

int	check_arguments(int argc, char **argv)
{
	argv = NULL;

	if (argc != 4)
	{
		std::cerr << RED << "Not correct ammound of arguments. Expected 3:	<filename>, string s1, string s2" << PLAIN << std::endl; 
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (check_arguments(argc, argv))
		return (1);
	CpFile input;
	if (input.parse(argv[1], argv[2], argv[3]))
		return (1);
	input.readFile();
	return (0);
}
