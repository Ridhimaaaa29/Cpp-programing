// Q1 Read 3 numbers from stdin and print their sum to stdout

#include <iostream>
using namespace std;
int main() {
       
    int a, b, c;
    cin>> a >> b >> c; //Read the three integers
    cout<< a + b + c; //Print the sum of three integers
    return 0;
}

// Q2 Some C++ data types, their format specifiers, and their most common bit widths are as follows:

// Input Format
// Input consists of the following space-separated values: int, long, char, float, and double, respectively.
// Output Format
// Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
// Sample Input
// 3 12345678912345 a 334.23 14049.30493
// Sample Output
// 3
// 12345678912345
// a
// 334.230
// 14049.304930000


// #include <iostream>
// #include <iomanip> //for set precision.
// using namespace std;

// int main() {
//     int n;
//     long l;
//     char c;
//     float f;
//     double d;
//     //reading input
//     cin >> n >> l >> c >> f >> d;
//     //printing output
//     cout<< n << endl;
//     cout<< l << endl;
//     cout<< c << endl;
//     cout<< fixed << setprecision(3) << f << endl;
//     //prints float to 3 decimal places
//     cout<< fixed << setprecision(9) << d <<endl;
//     return 0;
// }