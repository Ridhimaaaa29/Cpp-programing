#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (i < 5) {
        if (i == 3) {
        i++; // Increment i to avoid an infinite loop 
        continue;
        }
        cout<< i <<endl;
        i++;  // Increment i in all other cases  
    }
    return 0;
}