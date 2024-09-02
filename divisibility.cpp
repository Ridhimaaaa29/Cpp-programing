//WAP to print the first multiple of 5 that is also a multiple of 7.
#include<iostream>
using namespace std;
int main() {
    int i = 5;
    while (true) {
        //checking divisibility with 7 using modulus operator.
        if (i % 7 == 0) {
            cout<<i<<endl; //printing first common multiple of 5 and 7.
            break; //terminate the loop
        }
        //iteration
        i += 5;
    }
    return 0;
}