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
    for(int st=0;st<s;st++){
        int curr=0;
        for(int end=st;end<s;end++){
           curr+=arr[end];
           maxsum=max(curr,maxsum);
            
        } 
        
    }
    cout<<"max subarray sum: "<<maxsum;
    return 0;
}