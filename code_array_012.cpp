#include <iostream>
#include <vector> // Including the vector library
using namespace std;
int main() {
    int myNum[3] = {10, 20, 30};
    cout << myNum[0] << "\n";
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] << "\n";
    cars[0] = "Opel";
    cout << cars[0] << "\n";
    
    for (string car : cars) {
      cout << car << "\n";
    }
    
    // A vector with 3 elements
    vector <string> element = {"Volvo", "BMW", "Ford"};
    cout << sizeof(element) << " Before Add" << "\n";
    // Adding another element to the vector
    element.push_back("Tesla");
    cout << sizeof(element) << " After Add" << "\n";
    for (string index : element) {
      cout << index << "\n";
    }
}
