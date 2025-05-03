#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int bruteForce2Sum(vector<int> &arr,int target){
    int n=arr.size();

    for(int i=0;i<n;i++){
        //int f=arr[i];
        for(int j=i;j<n;j++){
            //int s=arr[j];
            int sum=arr[i]+arr[j];
            if(target==sum){
                cout<<"the pair whose sum is equal to "<<target<<" is "<<arr[i]<<" and "<<arr[j];
            }
        }
    }
    return -1;
}

int better2Sum(vector<int> &arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int st=0,end=n-1;
    
    while(st<end){
        int sum=arr[st]+arr[end];
        if(sum== target){
            cout<<"the pair whose sum is equal to "<<target<<" is "<<arr[st]<<" and "<<arr[end];
        }
        else if(sum>target){
            end--;
        }
        else{
            st++;
        }
    }
    return -1;
}

vector<int> optimized2Sum(vector<int> arr, int target){
    int n=arr.size();

    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int f=arr[i];
        int s=target-f;
        if(m.find(s) != m.end()){//m.end() is a function that return an iterator when value is not found in the map
            ans.push_back(i);
            ans.push_back(m[s]);
            return ans;
            
        }
        m[f]=i;
    }
    return ans;
} 

int main(){
    vector<int> arr={5,2,11,7,15};
    
    int target;
    cout<<"Enter the target for 2 sum: ";
    cin>>target;

    //bruteForce2Sum(arr,target);
    //better2Sum(arr,target);
    optimized2Sum(arr,target);
    return 0;
}