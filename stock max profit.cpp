#include <iostream>
#include <vector>

using namespace std;

int maxProfit(int arr[],int s){
    int maxPro=0;
    int bestBuy=arr[0];

    for(int i=0;i<s;i++){
        if(arr[i]>bestBuy){
            maxPro=max(maxPro,arr[i] - bestBuy);
        } 
        bestBuy=min(arr[i],bestBuy);

    }

    return maxPro;
}

int main(){
    int s;
    cout<<"enter size of array: ";
    cin>>s;
    int price[s];
    cout<<"enter the elements of array: ";
    for(int i=0;i<s;i++){
        cin>>price[i];
    }

    for(int i=0;i<s;i++){
        cout<<price[i]<<" ";
    }
    cout<<endl;
    cout<<"Max profit= "<<maxProfit(price,s);

    return 0;
}