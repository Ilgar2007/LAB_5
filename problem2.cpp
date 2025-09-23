#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout<<i<<endl;
    }
    cout<<"The sum of all real number till 10 is "<< sum<<endl;
}