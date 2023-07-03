#include "scalar.hpp"

bool	isInt(std::string str);
bool	isFloat(const std::string& str);
bool	isDouble(const std::string& str);

e_scalar	getType(std::string& str) {
	if (isInt(str))
		return INT;
	if (str.length() == 1)
		return CHAR;
	if (isFloat(str))
		return FLOAT;
	if (isDouble(str))
		return DOUBLE;
	return INVALID;
}

bool	isInt(std::string str) {
	if (str.front() == '-')
		str.erase(0,1);
	if (!str.empty())
		if (str.find_first_not_of("0123456789") == std::string::npos)
			return true;
	return false;
}

bool	isFloat(const std::string& str) {
	if (isDouble(str.substr(0, str.length() - 1)))
		if (str.back() == 'f')
			return true;
	return false;
}

bool	isDouble(const std::string& str) {
	std::string pseudo[] = {"-inf", "+inf", "nan"};
	size_t 		dot = str.find_first_of('.');

	for (int i = 0; i < 3; i++)
		if (!str.compare(pseudo[i]))
			return true;
	if (dot == std::string::npos)
		return false;
	if (isInt(str.substr(0, dot)))
		if (isInt(str.substr(dot + 1)) && str[dot + 1] != '-')
			return true;
	return false;
}
