//sum of first n natural numbers.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n :";
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout<<"Sum of n natural numbers :"<<sum;
    return 0;
}