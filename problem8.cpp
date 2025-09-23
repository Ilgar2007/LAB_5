#include <iostream>
using namespace std;

int main() {
   int revNum = 0;
   int num ;
   cout << "Please enter a number: " ;
   cin >> num;

   while (num > 0) {
      revNum = revNum*10 + num % 10;
      num = num / 10;
   }
   cout<<revNum;
}
