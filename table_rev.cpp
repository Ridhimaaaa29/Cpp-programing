//reverse of a table.
#include <iostream>  
using namespace std;  

int main() {  
    int n;  
    cout << "Enter n: ";  
    cin >> n;  

    // Print the reverse multiplication table for the number n  
    for (int i = 10; i >= 1; i--) {  
        cout << n * i << endl; // Print each value on a new line  
    }  

    return 0;  
}
