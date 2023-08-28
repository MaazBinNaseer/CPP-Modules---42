#include "Serialization.hpp"


int main()
{
    Data information;
    information.data = "What is this value";
    information.n = 2415456;

    uintptr_t serializeva = Serialize::serialize(&information);
    std::cout << "Serialize: " << serializeva << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    Data *back = Serialize::deserialize(serializeva);
    std::cout << "Deserialize " << back <<  " Serial Poitner " << &serializeva << std::endl;
    std::cout << back->data << ": data" <<std::endl;
    std::cout << back->n  << ": n" << std::endl;
}