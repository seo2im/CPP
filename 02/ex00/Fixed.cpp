#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointValue = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPointValue = fixed.getRawBits();
	return (*this);
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits memeber function called" << std::endl;
	return (this->fixedPointValue);
}

void Fixed::setRawBits(int raw)
{
	this->fixedPointValue = raw;
}