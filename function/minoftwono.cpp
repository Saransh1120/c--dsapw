#include<iostream>
using namespace std;

void fun(int a, int b) //parameters  ke jo int a and int b hai 
{
    if(a < b)
        cout << a << " smaller number";
    else
        cout << b << " smaller number";
}

int main()
{
    fun(79,78); // arugemnts value jo hai 79 and 78
}
