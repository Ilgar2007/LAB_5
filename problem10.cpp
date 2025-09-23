#include <iostream>
using namespace std;

int main() {
   //create variables num, max
   int num, max = INT_MIN;
   //create while loop that stop when user enters 0
   while (true) {
      cin>>num;
      //stop if the user enters 0
      if (num==0) break;
      //check if max is less than num and update max
      if (max<num) {
         max = num;
      }
   }
   cout<<"MAX NUMBER IS "<<max<<endl;
   return 0;
}