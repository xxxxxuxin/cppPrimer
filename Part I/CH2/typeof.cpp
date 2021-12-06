
#include <cxxabi.h>
#include <iostream>
#include <typeinfo>
#include <cstdlib>

namespace some_namespace { namespace another_namespace {

  class my_class { };

} }

int main() {
  typedef some_namespace::another_namespace::my_class my_type;
  // mangled
  std::cout << typeid(my_type).name() << std::endl;

  // unmangled
  int status = 0;
  char* demangled = abi::__cxa_demangle(typeid(my_type).name(), 0, 0, &status);

  switch (status) {
    case -1: {
      // could not allocate memory
      std::cout << "Could not allocate memory" << std::endl;
      return -1;
    } break;
    case -2: {
      // invalid name under the C++ ABI mangling rules
      std::cout << "Invalid name" << std::endl;
      return -1;
    } break;
    case -3: {
      // invalid argument
      std::cout << "Invalid argument to demangle()" << std::endl;
      return -1;
    } break;
 }
 std::cout << demangled << std::endl;

 free(demangled);

 return 0;
}