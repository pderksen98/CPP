#ifndef _FIXED_HPP
# define _FIXED_HPP
#include <iostream>
#include <tgmath.h>
# define YELLOW "\033[1;33m"
# define PLAIN "\033[0m"
# define RED "\033[1;31m"
# define LESS_RED "\033[0;31m"
# define GREEN "\033[1;92m"
# define CYAN "\033[1;36m"

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed(const int num);
		Fixed(const float num);
		Fixed& 	operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;


		friend std::ostream& operator<<(std::ostream& stream, const Fixed& obj);
} ;


#endif