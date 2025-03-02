#include <iostream>
using namespace std;

int main() {
  int x, y;
  cout << "Type a number for 'A': ";
  cin >> x; 
  // Get user input from the keyboard
  cout << "Type a number for 'B': ";
  cin >> y;
  // Get user input from the keyboard
  
  cout << "A + B =" << x + y << "\n";
  cout << "A - B =" << x - y << "\n";
  cout << "A x B =" << x * y << "\n";
  cout << "A ÷ B =" << x / y << "\n";
  cout << "A ÷ B and division remainder =" << x / y << "\n";
}
