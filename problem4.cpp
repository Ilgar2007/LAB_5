#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        if (i%10==0) {
            cout<<i<<endl;
        }
    }
}