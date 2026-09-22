#include <iostream>
using namespace std;

// STEP 1: x global variable hai
// Kyunki kisi function ke andar nahi hai
int x = 10;
int y = 8938729;

void first()
{
    // STEP 4: Global x yahan available hai
    cout << x << endl;
     cout << y << endl;
}

void second()
{
    // STEP 6: Global x yahan bhi available hai
    cout << x << endl;
}

int main()
{
    // STEP 2: Global x main() me bhi available hai
    cout << x << endl;

    // STEP 3: first() call
    first();

    // STEP 5: second() call
    second();

    // STEP 7: Program end
    return 0;
}swap