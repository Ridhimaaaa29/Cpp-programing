//Triangular Pattern
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i; j++){ //no. of asterics in coloumn = row no.
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}






