#include <iostream>
using namespace std;

int main() {
     int n;
     cout << "Enter number of classes: ";
     cin >> n;

     double totalCredits = 0, weightedSum = 0;

     for (int i = 0; i < n; i++) {
         double credits, mark;
         cin >> credits >> mark;
         totalCredits += credits;
         weightedSum += credits * mark;
     }

     double gpa = weightedSum / totalCredits;
     cout << "Your total GPA is " << gpa << endl;

     return 0;
 }
