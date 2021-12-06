#include <iostream>
#include <typeinfo>

int main(){

    // 2.1.2
    /*
    unsigned u=10, u2=42;
    std::cout<< u2-u << std::endl; //32
    std::cout<< u-u2 << std::endl; //-32 mod 2^32

    int i=10, i2=42;
    std::cout << i2-i << std::endl; //32
    std::cout << i-i2 << std::endl; //-32

    std::cout << i-u << std::endl; //0
    std::cout << u-i << std::endl; //0

    std::cout << u-i2 << std::endl; //-32 mod 2^32
    */

    // 2.1.3
    std::cout << typeid('a').name()  << std::endl;
    /*
    std::cout << "type of L\'a\' is " << typeid(L'a').name() << std::endl;
    std::cout << "type of \"a\" is " << typeid("a").name() << std::endl;
    std::cout << "type of L\"a\" is " << typeid("a").name() << std::endl;

    std::cout << "type of 10 is " << typeid(10).name() << std::endl;
    std::cout << "type of 10u is " << typeid(10u).name() << std::endl;
    std::cout << "type of 10L is " << typeid(10L).name() << std::endl;
    std::cout << "type of 10uL is " << typeid(10uL).name() << std::endl;
    std::cout << "type of 012 is " << typeid(012).name() << std::endl;
    std::cout << "type of 0xC is " << typeid(0xC).name() << std::endl;
    */

    return 0;
}