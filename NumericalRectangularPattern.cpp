// Numerical Rectangular Pattern
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        //start counting with row number up till n
        for(int j = i; j <= n; j++){
            cout<<j;
        }
        //then printing from 1 up till row no. - 1
        for(int j = 1; j <= (i-1); j++){
        cout<<j;
        }
        cout<<endl;
    }
    return 0;
}



