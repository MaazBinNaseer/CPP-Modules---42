#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

struct Data
{
    std::string data;
    int         n;
};

class Serialize
{
    private:
        Serialize();
        Serialize(const Serialize& value);
        Serialize& operator=(const Serialize& value);
    public:
       static uintptr_t serialize(Data *ptr);
       static Data* deserialize(uintptr_t raw);
        ~Serialize();
};






#endif