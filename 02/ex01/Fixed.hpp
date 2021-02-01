#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
	private :
		int value;
		static const int bits = 8;
	public :
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		
		int	getRawBits() const;
		void setRawBits(int const bits); 
		int toInt() const;
		float toFloat() const;
};

std::ostream  &operator <<(std::ostream &out, Fixed const &value);

#endif