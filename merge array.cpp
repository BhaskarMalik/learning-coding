#include <iostream>
#include <vector>

using namespace std;

class solution{
    public:
        void mergeArrays(vector <int> &arr,vector<int> &arr2){
            arr.resize(arr.size()+arr2.size());
            int idx=arr.size()+arr2.size()-1;

            int i=arr.size()-1,j=arr2.size()-1;
            while(i>=0 && j>=0){
                if(arr[i]>=arr2[j]){
                    arr[idx]= arr[i];
                    i--;
                    idx--;
                }
                else{
                    arr[idx]=arr2[j];
                    j--;
                    idx--;
                }
    
            }
            while(j>=0){
               arr[idx]=arr2[j];
                j--;
                idx--; 
            }
        }



    void printArray(const vector<int> &arr){
            for(int i:arr){
                cout<<i<<" ";
            }
            cout<<endl;
        }

};


int main(){
    vector<int> vec={1,2,3};
    vector<int> vec2={2,5,6};
    solution a;
    a.mergeArrays(vec,vec2);
    a.printArray(vec);
 
    return 0;
}