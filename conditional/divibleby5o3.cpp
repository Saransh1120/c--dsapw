#include<iostream>
using namespace std;
int main() {

    int x;
    cout<<"enter the numbers";
     cin>>x;
if(x % 5 == 0 && x % 3 == 0) {
    cout << "yes, the number is divisible by both 5 and 3";
}
else if(x % 5 == 0) {
    cout << "yes, the number is divisible by 5";
}
else if(x % 3 == 0) {
    cout << "yes, the number is divisible by 3";
}
else {
    cout << "the number is not divisible by 5 or 3";
}
        
    
    return 0;
}