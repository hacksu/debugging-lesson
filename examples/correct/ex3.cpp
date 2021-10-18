/*  
    Debugging Example 3: Use a multiply 
    function to multiply two numbers
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*  Old code: not accounting for decimals
    int multiply(int lhs, int rhs) {
        return lhs * rhs;
    }
*/

double multiply(double lhs, double rhs) {
    return lhs * rhs;
}

int main() {
    int i = 5;
    double j = 2.5;
    cout << i << " * " << j << " = " << multiply(i, j) << endl;
}