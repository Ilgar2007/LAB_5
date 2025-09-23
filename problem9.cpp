#include <iostream>
using namespace std;

int main() {
   int number;
   int sum;
   cout << "Enter a number: ";
   cin >> number;
   for (int i = 1; i <= number; i++) {
      sum= i*i;
      cout << i<<"*" << i << "=" << sum<< endl;
   }
}

