#ifndef	FIXED_H
#define	FIXED_H
#include	<iostream>
#include	<string>
class	Fixed
{
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(const Fixed& fixed) const;
		bool	operator<(const Fixed& fixed) const;
		bool	operator>=(const Fixed& fixed) const;
		bool	operator<=(const Fixed& fixed) const;
		bool	operator==(const Fixed& fixed) const;
		bool	operator!=(const Fixed& fixed) const;
		Fixed	operator+(const Fixed& fixed) const;
		Fixed	operator-(const Fixed& fixed) const;
		Fixed	operator*(const Fixed& fixed) const;
		Fixed	operator/(const Fixed& fixed) const;
		static Fixed&	min(Fixed& firstFixed, Fixed& secondFixed);
		static Fixed&	max(Fixed& firstFixed, Fixed& secondFixed);
		static const Fixed&	min(const Fixed& firstFixed, const Fixed& secondFixed);
		static const Fixed&	max(const Fixed& firstFixed, const Fixed& secondFixed);


	private:
		int					value;
		static const int	fractionalBits = 8;
};
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
#endif