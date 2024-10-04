// Count the number of digits.

#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter a number : "; // Enter any random number.
    cin>>n;
    int digits = 0; // Initialization for the counter to zero.

    // Handle the special case where the input is zero.  
    if (n == 0) {  
        cout << "Number of digits : 1" << endl; // Zero has one digit.  
        return 0;
    }  

    // Using the absolute value to count digits for negative numbers.  
    n = abs(n);  

    while (n>0) {
        digits++; // Counter for digits keeps on incrimenting till the quotient(n) is zero.
        n = n / 10; // Removing the last digit.
    }

    cout<<"Number of digits: "<<digits<<endl; // Printing the total number of digits
    return 0;
}



















