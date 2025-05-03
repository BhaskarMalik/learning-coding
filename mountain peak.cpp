#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int mountainPeak(int arr[], int s){
    int st=1;
    int end=s-2;
    
    while(st<=end){
        //int mid=(st+end)/2;//may cause overflow instead using
        int mid = st+( (end-st)/2);
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else{
             end=mid- 1;
        }       
    }
    return -1;
}
//(arr[mid]<arr[mid+1])
int main(){
    int s;
    cout<<"Enter the number of elements: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the elements: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<mountainPeak(arr, s);
     
    return 0;
}