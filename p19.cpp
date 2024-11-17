
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    cout<< "Enter the mark" <<endl;
    int x,A;
    cin>>x;
    A= x%2;
    if (A==0)
        cout << "IT is even number";
    else
        cout << "IT is odd number";
    return 0;
}
