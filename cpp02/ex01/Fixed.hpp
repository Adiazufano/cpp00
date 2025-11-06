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

	private:
		int					value;
		static const int	fractionalBits = 8;
};
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
#endif