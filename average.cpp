//print the average of first n natural numbers.
#include<iostream>
#include<iomanip>
using namespace std;
int main () {
    int sum = 0; //initialising sum as 0
    double avg;
    int num;
    //user input
    cout<<"Enter num : ";
    cin>>num;
    for (int n = 1; n <= num ; ++n) {
        sum += n ;
    }
    avg = (double)sum / num;
    cout << fixed << setprecision(1);
    cout << "Average is " << avg << endl;  // Average is 50.5
  return 0;
}
