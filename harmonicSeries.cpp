#include <iostream>  
#include <iomanip> // for setting precision  
using namespace std;  

int main() {  
    int N;  
    double harmonicSum = 0.0;  

    // Enter the number of terms  
    cout << "Enter a positive integer N to calculate the harmonic series sum (1 + 1/2 + ... + 1/N): ";  
    cin >> N;  

    // Ensuring N is positive  
    if (N <= 0) {  
        cout << "Please enter a positive integer." << endl;  
        return 1; // exit the program with an error code  
    }  

    // Calculating the harmonic sum using a for loop  
    for (int i = 1; i <= N; ++i) {  
        harmonicSum += 1.0 / i; // Add 1/i to the sum  
    }  

    // Printing the result with 6 decimal points  
    cout << "The sum of the first " << N << " terms of the harmonic series is: "  
         << setprecision(6) << fixed << harmonicSum << endl;  

    return 0;
}


