/*  
    Debugging Example 2: Print out the numbers 0-9
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int i;
    while (i < 10) {
        cout << "i = " << i << endl;
        i++; // We need to make sure to change the loop 
             // variable or it will be infinte.
    }
}