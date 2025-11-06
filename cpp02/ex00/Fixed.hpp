#ifndef		FIXED_H
#define		FIXED_H
#include	<iostream>
#include	<string>
class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int				value;
		static const	int fractionalBits = 8;

};

#endif