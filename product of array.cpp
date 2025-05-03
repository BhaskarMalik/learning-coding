#include <iostream>
#include <vector>

using namespace std;

vector<int> prodArrayBF(vector<int> &nums){
    int s=nums.size();
    vector<int> ans(s,1);
    for(int i=0;i<s;i++){
        //int prod=1;
        for(int j=0;j<s;j++){
            if(i!=j){
                ans[i]*=nums[j];
               // prod*=nums[j];
                
            }
            
        }
        //ans.push_back(prod);
    }

    return ans;

}

vector<int> prodArrayPrefixSuffix(vector<int> &nums){
    int s=nums.size();
    vector<int> ans(s,1);
    vector<int>prefix(s,1);
    vector<int>suffix(s,1);
    for(int i=1;i<s;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
   for(int i=s-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
   }

   for(int i=0;i<s;i++){
    ans[i]=prefix[i]*suffix[i];
   }
    return ans;

}

vector<int> prodArray(vector<int> &nums){
    int s=nums.size();
    vector<int> ans(s,1);
    
        for(int i=1;i<s;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
   for(int i=s-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
   }


    return ans;


}


int main(){
    vector<int> ques={1,2,3,4};
    for(int i : ques){
        cout<<i<<" ";
    }

    cout<<endl;
    vector<int> anss = prodArray(ques);

    cout<<"product of array= ";

    for(int i : anss){

        cout<<i<<" ";
    }

    return 0;
}