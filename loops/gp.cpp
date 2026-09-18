
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    
    
   int a=1 , r=2;
    for(int i=0;i<=n;i++){
        cout<<a<<" ";
        
        a*=r;
    }
    
    
 

    return 0;
}