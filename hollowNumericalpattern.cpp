//Hollow Numerical Rectangle
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
            cout<<j; //max num to be printed m will print the number only while j will print the seq of nums till m;
            } else{
                cout<<" "; // blank space using space
            }
        }
        cout<<endl;//for next line
    }
    return 0;
}



