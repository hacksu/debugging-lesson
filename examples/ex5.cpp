#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int sum = 0;
    int arr[5] = {2, 4, 6, 8,10};
    for (int i = 0; i <= 5; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
}