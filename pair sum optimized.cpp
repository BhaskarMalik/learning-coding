 #include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> vec;
    int s=nums.size();
    
    //for(int i=0;i<s;i++){
    //    for(int j=s-1;j>=0;j--){
    //        if(nums[i]+nums[j]>target){
    //           continue;
    //        }
    //        if(nums[i]+nums[j]<target){
    //            break;
    //        }
    //        else{
    //            vec.push_back(i);
    //            vec.push_back(j);
    //            return vec;
    //        }
    //    }
    //}

    int i=0;                //using two pointer approach
    int j=s-1;
    
    while(i<j){
        int ps=nums[i]+nums[j];
        if(ps>target){
               j--;
            }
        else if(ps<target){
                i++;
            }
        else{
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
    }
    return vec;
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
    vector<int> v={2,7,11,15};
    for(int i : v){
      cout<<i<<" ";
    }  
    int target;
    cout<<endl<<"the pair of sum you want: ";
    cin>>target;

    vector<int> ans = pairSum(v,target);
    for(int i : ans){
      cout<<i<<" ";
    }  

    //cout<<"the pair whose sum is equal to target = ";
    //
    //


    return 0;
}