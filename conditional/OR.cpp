#include <iostream>
using namespace std;

int main() {

    int x,y;
cout << "Enter the number: ";


    cin >> x;
    

    if(x%5==0 || x%3==0) {

        cout<<"divible by one of them";
    }
    else cout<<"not divible";

    

    return 0;
}