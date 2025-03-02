#include <iostream>
using namespace std;
int main() {
    cout << "--------For Loop----------\n";
    for (int i = 0; i < 5; i++) {
      cout << i << "\n";
    }
    
    cout << "--------Nested Loops----------\n";
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
      cout << "Outer: " << i << "\n"; // Executes 2 times
    
      // Inner loop
      for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
      }
    }
    
    cout << "--------foreach Loop----------\n";
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
      cout << i << "\n";
    }

}
