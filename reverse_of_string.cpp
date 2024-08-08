//Reverse of a String
#include <iostream>  
#include <string>  
#include <algorithm>  

using namespace std;  

void reverseString() {  
    string str;  
    cout << "Enter a string: ";  
    getline(cin, str);  

    reverse(str.begin(), str.end());  
    cout << "Reversed string: " << str << endl;  
}  

int main() {  
    reverseString();  
    return 0;  
}
