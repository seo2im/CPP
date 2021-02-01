#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits memeber function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int bits)
{
	this->value = bits;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}