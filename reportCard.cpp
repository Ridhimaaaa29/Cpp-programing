#include <iostream>  
using namespace std;  
int main() {  
    int score;   
    cout << "Enter score: "; // Enter total marks.  
    cin >> score;  
    // Grades will be assigned based on the predefined criteria.  
    if (score >= 33) {  
        if (score >= 90 && score <= 100) {  
            cout << "Grade: A+";  
        } else if (score >= 80) {  
            cout << "Grade: A";  
        } else if (score >= 70) {  
            cout << "Grade: B+";  
        } else if (score >= 60) {  
            cout << "Grade: C";  
        }   
        //using `&&` for range  
        else if (score >= 33 && score < 60) {   
            cout << "Grade: P";  
        }   
    } else {  
        cout << "Fail!";  
    }  
    return 0; 
}
