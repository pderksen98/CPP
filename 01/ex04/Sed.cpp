#include "Sed.hpp"

int	CpFile::parse(std::string file_name, std::string s1, std::string s2)
{
	if (s1 == "")
	{
		std::cerr << RED << "s1 cannot be an empty string\n" << PLAIN;
		return (EXIT_FAILURE);
	}
	_input.open(file_name, std::ios::in);
	if (!_input.is_open())
	{
		std::cerr << "No such file: " << RED << file_name << PLAIN << std::endl;
		return (EXIT_FAILURE);
	}
	std::string outfile = file_name + ".replace";
	_output.open(outfile, std::ios::out);
	if (!_output.is_open())
	{
		std::cerr << "Unable to create file: " << RED << outfile << PLAIN << std::endl;
		_input.close();
		return (EXIT_FAILURE);
	}
	_s1 = s1;
	_s2 = s2;
	return (EXIT_SUCCESS);
}

std::string	CpFile::determineLine(std::string line)
{
	size_t	position;

	position = line.find(_s1);
	while (position != std::string::npos)
	{
		line.erase(position, _s1.length());
		line.insert(position, _s2);
		position = line.find(_s1);
	}
	return (line);
}

void	CpFile::readFile()
{
	std::string	line;

	while (getline(_input, line))
		_output << determineLine(line) << std::endl;
	_input.close();
	_output.close();
}
