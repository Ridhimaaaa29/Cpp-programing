// Pyramid Patter
#include<iostream>
using namespace std;
int main() {
    int n;
    //take input from user.
    cout<<"enter n:";
    cin>>n;
    //rows: equal to the user input
    for (int i = 1; i <= n; i++){
        //column: will go from (1 to (n - row no.))
        for (int j =1; j <=(n-i); j++) {
            //printing space
            cout<<" ";
        } for (int j = 1; j <= (2*i-1); j++) {
            //printing star (1 to (2i - 1))
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


