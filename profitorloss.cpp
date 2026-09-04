#include<iostream>
using namespace std;

int main(){ 

    int costp, sellingp;

    cout << "Enter the cost price: ";
    cin >> costp;

    cout << "Enter the selling price: ";
    cin >> sellingp;

    int profit = sellingp - costp;
    int loss = costp - sellingp;

    if(sellingp > costp) {
        cout << "The profit is: " << profit;
    }
    else if(costp > sellingp) {
        cout << "The loss is: " << loss;
    }
    else {
        cout << "No profit, no loss";
    }

    return 0;
}












 
