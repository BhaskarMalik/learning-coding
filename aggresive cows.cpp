 #include <iostream>
 #include <vector>
 #include <algorithm>

 using namespace std;


bool isPossible(vector<int> &arr,int n, int c,int minAllowedDist){
    
    int cow=1;
    int lastStallPos=arr[0];

    for(int i=1  ;i<arr.size();i++){
        if(arr[i]-lastStallPos>=minAllowedDist){
            cow++;
            lastStallPos=arr[i];
        }
        if(cow==c){
            return true;
        }
    }
    return false;
}


int getDistanceMin(vector<int> &arr,int n, int m){
    sort(arr.begin(),arr.end());
    int st=1;
    int end=arr[arr.size()-1]-arr[0];
    int ans=-1;
 


    while(st<=  end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            st=mid+1;
        }

        else{
            end=mid-1;
        }
    }
    return ans;
    

}

 int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5,c=3;

    cout<<getDistanceMin(arr,n,c);
    return 0;
 }