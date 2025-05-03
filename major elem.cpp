#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int majorElem(vector<int> nums){
    int s=nums.size();


    sort(nums.begin(),nums.end());

    int freq=1, ans=nums[0];
    for(int i : nums){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1; 
            int ans=nums[i];
        }
        

        if(freq>s/2){
            return ans;
        }
    }

    return ans;


    //int freq= 1,ans= freq;;
    //for(int i : nums){
    //    if(nums[i]==nums[i+1]){
    //        freq++;
    //        ans=max(freq,ans);        without using sort function
    //    }
    //    else{
    //        freq=1; 
    //    }
    //    
//
    //    if(freq>s/2){
    //        return ans;
    //    }
    //}



    //for(int i=0;i<s;i++){
    //    int freq=1;
    //    for(int j=i+1;j<s;j++){
    //        if(nums[i]==nums[j]){
    //            freq++;
    //        }
    //    }
    //    if(freq>s/2){
    //        vec.push_back(i);
    //        return vec; 
    //    }
    //}
    //return nums;
}

int main(){
    //int s;
    //cout<<"Enter the size of the array: ";
    //cin>>s;
    //int arr[s];
    //cout<<"Enter the elements of the array: ";
    //for(int i=0;i<s;i++){
    //    cin>>arr[i];
    //}
    vector<int> v={1,1,2,1,2};
    for(int i : v){
      cout<<i<<" ";
    }  


    cout<<endl<<majorElem(v);
   

    //cout<<"the pair whose sum is equal to target = ";
    //
    //


    return 0;
}