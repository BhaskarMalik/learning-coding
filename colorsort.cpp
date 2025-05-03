#include <iostream>
#include <vector>

using namespace std;

class solution{
    public:
        void sortColorsOptimized(vector<int> &arr){
            int n=arr.size();
            int count0=0,count1=0,count2=0;

            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    count0++;
                }
                else if(arr[i]==1){
                    count1++;
                }
                else{
                    count2++;
                }
            }

            for(int i=0;i<count0;i++){
                arr[i]=0;
            }
            for(int i=count0;i<(count0+count1);i++){
                arr[i]=1;
            }
            for(int i=(count0+count1);i<(count0+count1+count2);i++){
                arr[i]=2;
            }
        }

        void sortColorsOptimal(vector<int> &arr){
            int n=arr.size();
            int high=n-1,low=0,mid=0;

            while(mid<=high){
                if(arr[mid]==0){
                    swap(arr[low],arr[mid]);
                    mid++;
                    low++; 
                }
                else if(arr[mid]==1){
                    mid++;
                }
                else{
                    swap(arr[high],arr[mid]);
                    high--;
                    
                }
            }
        }    




        printArray(vector<int> &arr){
            for(int i:arr){
                cout<<i<<" ";
            }
            cout<<endl;
        }

};


int main(){
    vector<int> vec={2,0,2,1,1,0,1,2,0,0};
    solution a;
    a.sortColorsOptimal(vec);
    a.printArray(vec);
 
    return 0;
}