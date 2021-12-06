#include <iostream>
#include <typeinfo>
#include <cxxabi.h>

using namespace std;

int main(){

    // 2.1.2
    /*
    unsigned u=10, u2=42;
    cout<< u2-u << endl; //32
    cout<< u-u2 << endl; //-32 mod 2^32

    int i=10, i2=42;
    cout << i2-i << endl; //32
    cout << i-i2 << endl; //-32

    cout << i-u << endl; //0
    cout << u-i << endl; //0

    cout << u-i2 << endl; //-32 mod 2^32
    */

    // 2.1.3
    int status = 0;
    cout << "type of \'a\' is "<< abi::__cxa_demangle(typeid('a').name(), 0, 0, &status)<< endl;
    cout << "type of L\'a\' is " << abi::__cxa_demangle(typeid(L'a').name(), 0, 0, &status) << endl;
    cout << "type of \"a\" is " << abi::__cxa_demangle(typeid("a").name(), 0, 0, &status) << endl;
    cout << "type of L\"a\" is " << abi::__cxa_demangle(typeid(L"a").name(), 0, 0, &status)<< endl;
    cout << "\n\n";

    cout << "type of 10 is " << abi::__cxa_demangle(typeid(10).name(), 0, 0, &status)<< endl;
    cout << "type of 10u is " <<abi::__cxa_demangle(typeid(10u).name(), 0, 0, &status) << endl;
    cout << "type of 10L is " << abi::__cxa_demangle(typeid(10L).name(), 0, 0, &status)<< endl;
    cout << "type of 10uL is " <<abi::__cxa_demangle(typeid(10uL).name(), 0, 0, &status) << endl;
    cout << "type of 10. is " << abi::__cxa_demangle(typeid(10.).name(), 0, 0, &status) << endl;
    cout << "type of 10e-2 is " << abi::__cxa_demangle(typeid(10e-2).name(), 0, 0, &status) << endl;
    cout << "\n\n";

    cout << "type of 012 is " << abi::__cxa_demangle(typeid(012).name(), 0, 0, &status)<< endl;
    cout << "type of 0xC is " << abi::__cxa_demangle(typeid(0xC).name(), 0, 0, &status) << endl;
    cout << "\n\n";

    cout << "type of 3.14 is " << abi::__cxa_demangle(typeid(3.14).name(), 0, 0, &status) << endl;
    cout << "type of 3.14f is " << abi::__cxa_demangle(typeid(3.14f).name(), 0, 0, &status) << endl;
    cout << "type of 3.14L is " << abi::__cxa_demangle(typeid(3.14L).name(), 0, 0, &status) << endl;
    cout << "\n\n";
    
    int month=9, day=7;
    cout<< "month: " << month << "day: " << day <<endl;
    // month=09; error: invalid digit '9' in octal constant
    day=07;
    cout<< "month: " << month << "day: " << day <<endl;

 

    return 0;
}