//WAP to enter users name and age. what will be the users age after 5 years?

#include<iostream>
#include <string>
using namespace std;

int main() {  
    string name;  
    int age;  

    cout << "Enter your name: ";  
    cin >> name;  

    cout << "Enter your age: ";  
    cin >> age;  

    cout << "Hello " << name << "! You will be " << (age + 5) << " in 5 years." << endl;  
    return 0;  
}  

