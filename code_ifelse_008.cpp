#include <iostream>
#include <string>
int main() {
  int number;

  std::cout << "Enter an integer: ";
  std::cin >> number;
  std::cout << "--------------------------\n";

  // Simple if statement
  std::cout << "-------Simple if--------\n";
  if (number > 0) {
    std::cout << "The number is positive." << std::endl;
  }

  // if-else statement
  std::cout << "--------if-else----------\n";
  if (number % 2 == 0) {
    std::cout << "The number is even." << std::endl;
  } else {
    std::cout << "The number is odd." << std::endl;
  }

  // if-else if-else statement
  std::cout << "------if-else if-else-----\n";
  if (number > 0) {
    std::cout << "The number is positive." << std::endl;
  } else if (number < 0) {
    std::cout << "The number is negative." << std::endl;
  } else {
    std::cout << "The number is zero." << std::endl;
  }

  // Nested if statements
  std::cout << "----------Nested if------\n";
  if (number != 0) {
    if (number > 0) {
      std::cout << "The number is positive and not zero." << std::endl;
    } else {
      std::cout << "The number is negative and not zero." << std::endl;
    }
  }
}
