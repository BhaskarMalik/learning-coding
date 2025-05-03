#include <iostream>
#include <vector>

using namespace std;

int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int maxsum=0;
    int curr=0;
    for(int st=0;st<s;st++){
        curr+=arr[st];
        maxsum=max(curr,maxsum);
        if(curr<0){
            curr=0;
        }
    }
    cout<<"max subarray sum: "<<maxsum;
    return 0;
} 