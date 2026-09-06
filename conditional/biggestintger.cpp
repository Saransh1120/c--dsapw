
#include <iostream>
using namespace std;

int main() {

    int x,y,z;
    cout<<"enter the numbers";
    cin>>x>>y>>z;

    if (x > y && x > z)
    cout << "Biggest number is " << x;
else if (y > x && y > z)
    cout << "Biggest number is " << y;
else
    cout << "Biggest number is " << z;



// if (x <= y && x <= z)
//     cout << "Smallest number is " << x;
// else if (y <= x && y <= z)
//     cout << "Smallest number is " << y;
// else
//     cout << "Smallest number is " << z;

    return 0;
}