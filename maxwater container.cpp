#include <iostream>
#include <vector>

using namespace std;

int maxWaterBF(int arr[],int s){
    int maxW=0;

    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            maxW=max(maxW,min(arr[i],arr[j])* (j-i));    
        }
    }
    return maxW;

}

int maxWater(int arr[],int s){
    int maxW=0;
    int i=0;
    int j=s-1;

    while(i<j){
        maxW=max(maxW,min(arr[i],arr[j])* (j-i));
        if(arr[i]<arr[j]){
            i++;
        }
        else{
            j--;
        }

                
       
    }
    
    return maxW;

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
    cout<<"Max water that can be stored= "<<maxWater(price,s);

    return 0;
}