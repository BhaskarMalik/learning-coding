#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int rotatedArraySearch(int arr[], int s,int a){
    int st=0;
    int end=s-1;
    
    while(st<=end){
        //int mid=(st+end)/2;//may cause overflow instead using
        int mid = st+( (end-st)/2);
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[st]<=arr[mid]){
            if(arr[st]<=a && arr[mid]>=a){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else {
            if(arr[mid]<=a && arr[end]>=a){
                st=mid+1;
            }
            else{
                end=mid- 1;
            }

        }
    }
    return -1;
}

int main(){
    int s;
    cout<<"Enter the number of elements: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the elements: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you want to search: ";
    cin>>target;
    cout<<rotatedArraySearch(arr, s, target);
     
    return 0;
}