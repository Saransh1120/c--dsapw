
int main() {

    int x;
    cout<<"enter the numbers";
     cin>>x;


    if(x%5==0 || x%3==0){
    cout<<"yes the number is divisble"<<x;
    }
 
    else if(x%5==0 && x%3==0){
       cout<<" yes the number is divisble by both ";
    }
    else  {
        cout<<"the number not divible by both";
    }

        
    
    return 0;
}