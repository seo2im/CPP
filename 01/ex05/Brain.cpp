#include "Brain.hpp"

std::string Brain::identify()
{
	const long address = (long)this;

	std::stringstream stream;
	stream << "0x" << std::uppercase << std::hex << address;
	return (stream.str());
}