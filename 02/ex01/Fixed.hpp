#ifndef _FIXED_HPP
# define _FIXED_HPP
#include <iostream>
# define YELLOW "\033[1;33m"
# define PLAIN "\033[0m"
# define RED "\033[1;31m"
# define LESS_RED "\033[0;31m"
# define GREEN "\033[1;92m"
# define CYAN "\033[1;36m"

class Fixed
{
	private:
		int					_value;
		static const int	_fractional_bit = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
} ;


#endif