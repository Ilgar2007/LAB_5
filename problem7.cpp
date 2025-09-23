#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && n / i == i) {
            cout << "The number is a prime number: " << i << endl;
        }
    }
    cout<< "The number is not a prime number " << n << endl;
}
