/*Write a C++ program that calculates the sum of all even and odd
integers from 1 to a specified upper bound. After calculating the
sums, the program should determine and display the absolute 
difference between the two sums.*/

#include<iostream>  // Needed to use IO functions
using namespace std;
int main()
{
int sumEven = 0; //sum of even numbers upto upperbound
int sumOdd = 0; //sum od odd numbers upto upperbound
int upperbound = 10; // Sum from 1 to this upperbound
int absDiff; 
int number = 1;

while (number<= upperbound) {
  if (number % 2 == 0) {
  sumEven += number;
  }
  else {
  sumOdd += number;
}
  number++ ;
}

if (sumOdd > sumEven) {
  absDiff = sumOdd - sumEven;
}
else{
  absDiff = sumEven - sumOdd;
}
cout<< "Total number of even numbers ="<<sumEven<<endl;
cout<<"Total number of odd numbers ="<<sumOdd<<endl;
cout<<"The absolute difference ="<<absDiff<<endl;

return 0;

}

