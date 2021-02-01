#include "convertor.hpp"

static std::string toChar(std::string arg)
{
	bool isDot = false;

	if (!(arg[0] == '-') && !(arg[0] == '+') && !std::isdigit(arg[0]))
		return "Impossible";
	for(size_t i = 1; i < arg.length(); i++)
	{
		if (!std::isdigit(arg[i]))
		{
			if (arg[i] == '.')
			{
				if (!isDot)
					isDot = true;
				else
					return "Impossible";
			}
			else
				return "Impossible";
			if (arg[i] == 'f' && i == arg.length() - 1)
				continue;
			else
				return "Impossible";
		}
		else if (std::isdigit(arg[i]) && isDot)
			return "Impossible";
	}
	int test = std::atoi(arg.c_str());
	if (test > 128 || test < 0)
		return "Impossible";
	if (!std::isprint(test))
		return "Non displable";
	std::string s(1, test);
	return s;
		
}
static std::string toInt(std::string arg)
{
	bool isDot = false;

	if (!(arg[0] == '-') && !(arg[0] == '+') && !std::isdigit(arg[0]))
		return "Impossible";
	for(size_t i = 1; i < arg.length(); i++)
	{
		if (!std::isdigit(arg[i]))
		{
			if (arg[i] == '.')
			{
				if (!isDot)
					isDot = true;
				else
					return "Impossible";
			}
			else
				return "Impossible";
		}
	}
	long check = std::atol(arg.c_str());
	if (check < -2147483648 || check > 2147483647)
		return "Overflow";
	return std::to_string(std::atoi(arg.c_str()));
}
static std::string toFloat(std::string arg)
{
	bool isDot = false;

	if (arg == "nan" || arg == "inf" || arg == "-inf" || arg == "+inf")
		return arg + "f";
	if (arg == "nanf" || arg == "inff" || arg == "-inff" || arg == "+inff")
		return arg;
	if (!(arg[0] == '-') && !(arg[0] == '+') && !std::isdigit(arg[0]))
		return "Impossible";
	for(size_t i = 1; i < arg.length(); i++)
	{
		if (!std::isdigit(arg[i]))
		{
			if (arg[i] == '.')
			{
				if (!isDot)
					isDot = true;
				else
					return "Impossible";
			}
			else
				return "Impossible";
			if (arg[i] == 'f')
			{
				if (i == arg.length() - 1)
					continue ;
				else 
					return "Impossible";
			}	
		}
	}
	return std::to_string(std::atof(arg.c_str())) + "f";
}
static std::string toDouble(std::string arg)
{
	bool isDot = false;

	if (arg == "nan" || arg == "inf" || arg == "-inf" || arg == "+inf")
		return arg;
	if (!(arg[0] == '-') && !(arg[0] == '+') && !std::isdigit(arg[0]))
		return "Impossible";
	for(size_t i = 1; i < arg.length(); i++)
	{
		if (!std::isdigit(arg[i]))
		{
			if (arg[i] == '.')
			{
				if (!isDot)
					isDot = true;
				else
					return "Impossible";
			}
			else
				return "Impossible";
		}
	}
	return std::to_string(std::atof(arg.c_str()));
}

void convertor(std::string arg)
{
	std::cout << "char : " << toChar(arg) << std::endl;
	std::cout << "int : " << toInt(arg) << std::endl;
	std::cout << "float : " << toFloat(arg) << std::endl;
	std::cout << "double : " << toDouble(arg) << std::endl;
}