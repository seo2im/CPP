#include "convertor.hpp"

static char toChar(float f)
{
	char c;

	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	
	c = static_cast<char>(f);
	if (!std::isprint(c))
		throw std::string("Non displable");
	return c;
}

static int toInt(float f)
{
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("Impossilbe");
	return (static_cast<int>(f));
}

static float toFloat(float f)
{
	return static_cast<float>(f);
}

static double toDouble(float f)
{
	return static_cast<double>(f);
}

void convertor(std::string arg)
{
	float	f;
	int		yes;

	try {
		f = std::stof(arg);
		yes = 1;
	} catch (std::exception & e) {
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : impossible" << std::endl;
		std::cout << "Double : impossible" << std::endl;
		yes = 0;
	}
	
	if (yes == 0)
		return ;

	try {
		std::cout << "Char : " << toChar(f) << std::endl;
	} catch (std::string & e) {
		std::cout << "Char : " << e << std::endl;
	}

	try {
		std::cout << "Int : " << toInt(f) << std::endl;
	} catch (std::string & e) {
		std::cout << "Int : " << e << std::endl;
	}

	try {
		float tmpF = toFloat(f);
		if (tmpF - (int)tmpF != (float)0)
			std::cout << "Float : " << tmpF << "f" << std::endl;
		else
			std::cout << "Float : " << tmpF << ".0f" << std::endl;
	} catch (std::string & e) {
		std::cout << "Float : " << e << std::endl;
	}

	try {
		double tmpD = toDouble(f);
		if (tmpD - (int)tmpD != (float)0)
			std::cout << "Float : " << tmpD  << std::endl;
		else
			std::cout << "Float : " << tmpD << ".0" << std::endl;
	} catch (std::string & e) {
		std::cout << "Double : " << e << std::endl;
	}
}