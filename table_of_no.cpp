//Print a table of the number input by the user.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n :";
    cin>>n;
    
    // Print the multiplication table for the number n  
    for (int i = 1; i <= 10; i++) {  
        cout << n * i << endl; // Print each value on a new line  
    }  

    return 0;  
}