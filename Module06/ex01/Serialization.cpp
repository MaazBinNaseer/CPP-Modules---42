#include "Serialization.hpp"

Serialize::Serialize(){}

Serialize::Serialize(Serialize const &object)
{
	*this = object;
}

Serialize & Serialize::operator=(Serialize const &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

Serialize::~Serialize() {}


uintptr_t Serialize::serialize(Data *ptr)
{
    uintptr_t value = reinterpret_cast<uintptr_t>(ptr);
    return(value);
}

Data* Serialize::deserialize(uintptr_t raw)
{
    Data *value  = reinterpret_cast<Data *>(raw);
    return (value);
}




