#include "Serializer.hpp"

// Default constructor
Serializer::Serializer(void)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Serializer::Serializer(const Serializer &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	(void) copy;
	return ;
}

// Destructor
Serializer::~Serializer(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

// Assignment operator overload
Serializer	&Serializer::operator=(const Serializer &copy)
{
	//std::cout << "Assignment operator called" << std::endl;
	if (this != &copy)
		(void) copy;
	return (*this);
}

// Serialize & deserialize
uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
