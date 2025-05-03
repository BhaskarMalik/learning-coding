#include<iostream>

using namespace std;


int billCalculator(int units){
    int bill;
    if(units>300){
            
        bill= units*8;
    }
    else if(units>100 && units<=300){
            
        bill= units*5;
    }
    else{
        units=units*3;
    }
    return bill;
}
int main(){
    int units;
    cout<<"Enter the number of units consumed: ";
    cin>>units;

    cout<<"Your total bill is: "<<billCalculator(units);
    
    
    return 0;
}