// Sum of Digits.

#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter any number : "; //97578
    cin>>n;
    int sum = 0;

    // Using the absolute value to count digits for negative numbers.  
    n = abs(n);  
    
    while(n>0) {
        int lastdigit = n%10; //8
        sum += lastdigit; //8
        n /= 10; //9757
    }

    cout<<sum<<endl;
    return 0;

}






















