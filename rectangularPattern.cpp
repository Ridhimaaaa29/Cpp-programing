//Rectangular Pattern
#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"Enter n:"; //no. of rows
    cin>>n;
    cout<<"Enter m:"; //no of coloumns
    cin>>m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout<<"*"; //what has to be printed
        }
        cout<<endl;//for next line
    }
    return 0;
}





