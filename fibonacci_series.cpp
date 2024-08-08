#include <iostream>  

using namespace std;  

void printFibonacci(int n) {  
    int a = 0, b = 1, next;  
    cout << "Fibonacci Sequence: ";  

    for (int i = 0; i < n; i++) {  
        cout << a << " ";  
        next = a + b;  
        a = b;  
        b = next;  
    }  
    cout << endl;  
}  

int main() {  
    int terms;  
    cout << "Enter the number of terms in Fibonacci sequence: ";  
    cin >> terms;  

    printFibonacci(terms);  

    return 0;  
}
