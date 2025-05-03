 #include <iostream>
 #include <vector>

 using namespace std;


bool isPossible(vector<int> &arr,int n, int m,int maxAllowedTime){
    int painter=1;
    int time=0; 
    for(int i=0;i<arr.size();i++){
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    if(painter<=m){
        return true;
    }
    else{
        return false;
    }
}


int painterPartition(vector<int> &arr,int n, int m){
    int st=0;
    int end;
    int ans=-1;
    for(int i=0;i<arr.size();i++){
        st=max(arr[i],st);
    }
    for(int i=0;i<arr.size();i++){
        end+=arr[i];
    }

    while(st<end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }

        else{
            st=mid+1;
        }
    }
    return ans;
    

}

 int main(){
    vector<int> arr={40,30,10,20};
    int n=4,m=2;

    cout<<painterPartition(arr,n,m);
    return 0;
 }