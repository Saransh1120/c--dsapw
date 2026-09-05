#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter the number: ";
    cin >> x;

    if (x < 0) {
        x = -x;
    }

    if (x < 69) {
        cout << "Magnitude is smaller than 69";
    }
    else {
        cout << "Magnitude is not smaller than 69";
    }

    return 0;
}