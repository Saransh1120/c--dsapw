#include<iostream>
using namespace std;
int main () {

    int x;
cout<<"enter the number ";

cin>>x;
 x = abs(x);
//  x = abs(x);   // Converts negative number into positive

if(x%5==0) {
    cout<<" yes ";
}
else cout<<"no";

}
