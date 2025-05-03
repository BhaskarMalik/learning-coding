#include <iostream>
#include <vector>

using namespace std;

int singleElement(vector<int> arr){
    int st=0;
    int end=arr.size()-1;
    if(arr.size()==1){
        return arr[0];
    }
    while(st<=end){
        int mid = st+(end-st)/2;
        if(mid==0 && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid==end && arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){
                end=mid;
            }
            else{
                st=mid;
            }
        }
        else{
            if(arr[mid-1]==arr[mid]){
            st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}


int main(){
    vector<int> vec={3,3,7,7,10,11,11};
    for(int i : vec){
        cout<<i<<" ";
    }

    cout<<endl<<"single element in the given array is: "<<singleElement(vec);
    return 0; 
}