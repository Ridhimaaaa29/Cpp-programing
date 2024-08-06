//Swapping two numbers
#include<iostream>
using namespace std;
int main() {
    int a, b;
    //user input
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    //introducing third variable to store value of a.
    int c;
    c = a;
    a = b;
    cout<<"After swapping"<<endl;
    cout<<"a :"<<b<<endl;
    //as a stores the value of b.
    // b will be assigned the value of c.
    b = c;
    cout<<"b :"<<c<<endl;
    return 0;
}



