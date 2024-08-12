/*Truncation: Cutting off the decimal part of a number, resulting in a whole number.
Effect: No rounding occurs; the number is simply shortened to its integer part.
Explicit Type Casting*/

#include<iostream>  
// Includes the standard input/output stream library
#include<iomanip>  
// Includes the library that defines input/output manipulators  
using namespace std; 
// This allows us to use names from the standard library without the std:: prefix

int main() {
// Main function where the execution of the program begins  

// Print floating-point number in fixed format with 1 decimal point (need <iomanip>)
cout << fixed << setprecision(1); 
// Sets the output format to fixed and specifies 1 decimal point precision  

cout << (double)5 << endl; // int 5 → double 5.0
cout << (int)5.5 << endl;  
// Explicitly casts the double 5.5 to integer, prints 5 (truncates the decimal part)  
    

double aDouble = 5.6;
int anInt = (int)aDouble; // Explicitly casts aDouble to integer (truncating), assigns 5 to anInt. aDouble remains 5.6.  

// C++ also supports function-style type cast.
cout << double(5) << endl;    // 5.0
cout << int(5.5) << endl;     // 5
cout << int(aDouble) << endl; // 5
return 0;
// Ends the main function, returning 0 indicates successful execution  
}

