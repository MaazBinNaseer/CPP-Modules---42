#include "Call.hpp"

int main()
{
     for (int i = 0; i < 6; ++i) {
        Base* obj = generate();
        identify(obj);
        identify(*obj);
        delete obj;
    }

    
}