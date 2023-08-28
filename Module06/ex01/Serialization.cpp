#include "Serialization.hpp"

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




