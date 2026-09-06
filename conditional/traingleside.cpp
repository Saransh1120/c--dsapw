#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    cout<<" enter the sides";
    cin>>x>>y>>z;
// do side bari honi chiye 3rd side se bass

    if(x+y>z && y+z>x && x+z>y){
        cout<<"print ye sthe sides of traingle";
    }
    else cout<<" no ";

  
    return 0;
}