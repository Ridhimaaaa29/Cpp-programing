#include <iostream>  
using namespace std;  

// Class to represent a complex number  
class Complex {  
private:  
    double real;  
    double imag;  

public:  
    // Constructor to initialize the complex number  
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}  

    // Member function to add two complex numbers  
    Complex add(const Complex& other) {  
        return Complex(real + other.real, imag + other.imag);  
    }  

    // Function to display the complex number  
    void display() const {  
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;  
    }  
};  

int main() {  
    double real1, imag1, real2, imag2;  

    // Input for the first complex number  
    cout << "Enter the real and imaginary parts of the first complex number: ";  
    cin >> real1 >> imag1;  

    // Input for the second complex number  
    cout << "Enter the real and imaginary parts of the second complex number: ";  
    cin >> real2 >> imag2;  

    // Create complex number objects  
    Complex c1(real1, imag1);  
    Complex c2(real2, imag2);  

    // Add the two complex numbers  
    Complex sum = c1.add(c2);  

    // Display the result  
    cout << "Sum of the complex numbers: ";  
    sum.display();  

    return 0;  
}