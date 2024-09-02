//Hollow Rectangle
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
            if(i==1 || i==n || j==1 || j==m){
            cout<<"*"; //what has to be printed
            } else{
                cout<<" "; // blank space using space
            }
        }
        cout<<endl;//for next line
    }
    return 0;
}
