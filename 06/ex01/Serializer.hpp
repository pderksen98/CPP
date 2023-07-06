#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <cstdint>
#include <string>

struct Data {
	std::string	str;
	int 		x;
} ;

class Serializer {
	private:
		Serializer();
	public:
		Serializer(Serializer const& src);
		~Serializer();
		Serializer& operator=(Serializer const& rhs);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};



#endif