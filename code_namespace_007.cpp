#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main() {
  /* You might see some C++ programs that run without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:*/
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}
