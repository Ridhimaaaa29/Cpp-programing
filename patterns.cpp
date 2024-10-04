// Pattern Question 1
// #include<iostream>
// using namespace std;
// int main() {
//     int n, m;
//     cout<<"enter number of rows: ";
//     cin>>n;
//     cout<<"enter number of coloumns: ";
//     cin>>m;
//     for (int i = 1; i <=n ; i++){
//         for (int j = 1; j <= m; j++) {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Pattern question 2

// #include<iostream>
// using namespace std;
// int main() {
//     int n, m;
//     cout<<"Enter no. of rows : ";
//     cin>>n;
//     cout<<"Enter no. of rows : ";
//     cin>>m;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++){
//             if ((i+j)%2 == 0){  //using even odd
//                 cout<<"1";
//             } else {
//                 cout<<"2";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Pattern question 3

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter Max Number : ";
//     cin>>n;
//     for(int i = 1; i <= n; i++) {

//         for(int j =1; j <= (n-i); j++) { 
//             cout<<" "; //first print the space
//         } 
        
//         for(int j = 1; j <= i; j++) { 
//             cout<<j; //then the increasing numbers
//         } 
        
//         for (int j = (i-1); j >= 1; j--) { 
//             cout<<j; //then the decreasing numbers
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Pattern question 4 : Numerical Pyramid with Hollow Effect

// #include<iostream> 
// using namespace std;
// int main() {
//     int n; //max number
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i = 1; i <= n ; i++) { //for printing rows
//         for(int j = i; j <= n; j++) { // for printing coloumn spaces  
//             cout << " ";  
//         }  
//         for (int j = 1; j <= (2 * i - 1); j++) { // Loop for the numbers  
//             if (j == 1 || j == (2 * i - 1) || i == n) { // Condition for hollow effect  
//                 cout << i; // Print the current row number  
//             } else {  
//                 cout << " "; // Print space for hollow effect  
//             }  
//         }  
//         cout << endl; 
//     }  
//     return 0;  
// }


// Pattern question 5 : Numeric Diamond

#include<iostream>
using namespace std;
int main() {
    int rows;  

    cout << "Enter the number of rows for the diamond pattern: ";  
    cin >> rows;  
    // Upper part of diamond  
    for (int i = 1; i <= rows; i++) {    
        //for printing spaces
        for (int j = i; j < rows; j++) {  
            cout << " ";  
        }  
        // Printing the numbers for the upper part of diamond  
        for (int j = 1; j <= i; j++) {  
            cout << j << " ";  
        }  
        cout << endl; 
    }  
    // Lower part of diamond  
    for (int i = rows - 1; i >= 1; i--) {  
        // Printing spaces  
        for (int j = rows; j > i; j--) {  
            cout << " ";  
        }  
        // Printing the numbers for the lower part  
        for (int j = 1; j <= i; j++) {  
            cout << j << " ";  
        }  
        cout << endl;
    }  
    return 0;  
}











