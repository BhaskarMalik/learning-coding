#include<iostream>
#include<vector>

using namespace std;


vector<int> removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }

    
int main(){
    vector<int> vec={3,2,2,3};

    vector<int> v=removeElement(vec,3);
    for(int i:v){
        cout<<i<<" ";


    }
    cout<<endl;

    return 0;

}