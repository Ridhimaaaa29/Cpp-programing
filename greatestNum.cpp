//WAP to print the greatest of 3 numbers.
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"Enter first num: ";
    cin>>a;
    cout<<"Enter second num: ";
    cin>>b;
    cout<<"Enter third num: ";
    cin>>c;
    if ( a > b && a > c) {
        cout<<"Greatest num :"<< a;
        } else if ( b > a && b > c) {
            cout<<"Greatest num :"<< b;
        } else {
            cout<<"Greatest num:"<<c;
        }
        return 0;
}