#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create a string variable
    string greeting = "Hello";
    cout << greeting + "\n";
    
    // String Concatenation
    string firstName = "Bibul ";
    string lastName = "Doe";
    string fullName = firstName + lastName ;
    cout << fullName + "\n";
    
    /* Append contain functions that can perform certain operations on strings. */
    fullName = firstName.append(lastName);
    cout << fullName + "\n";
    
    /* String Length To get the length of a string, use the length() function */
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of txt string is: " << txt.length() << "\n";
    
    // Access Strings its index number inside square brackets [].
    string myString = "Hello";
    cout << myString[0] + "\n";
    
    // Change String Characters
    myString[0] = 'J';
    cout << myString + "\n";
    
    /* The at() function : The <string> library also has an at() function that can be used to access characters in a string.*/
    myString.at(0) = 'H';
    cout << myString + "\n";
}
