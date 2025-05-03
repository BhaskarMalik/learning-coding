#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    //reverse(arr.begin()+pivot+1,arr.end())
    void reverseArray(vector<int> &arr, int piv){
        int i=piv+1;
        int j=arr.size()-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    void lexicographicPermutation(vector<int> &arr){
        int piv=-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                piv=i;
                break;
            }
        }        
        if(piv==-1){
            //reverse(arr.begin(),arr.end());//function below can also be used
            reverseArray(arr,piv);
            return;
            
        }

        for(int i=arr.size()-1;i>piv;i--){
            if(arr[i]>arr[piv]){
                swap(arr[i],arr[piv]);
                break;
            }
        }

        reverseArray(arr,piv);
    }

     

    void printArray(const vector<int> &arr) {
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }

    
};

int main() {
    vector<int> vec = {1, 2, 3 ,6 ,5 ,4};
    //vector<int> vec2 = {2, 5, 6};
    int maxm=vec[0];
    for(int i=1;i<vec.size();i++){
        maxm=max(vec[i],maxm);
        
    }
    Solution a;
    
    while (true) {
        a.lexicographicPermutation(vec);
        if (is_sorted(vec.begin(), vec.end(), greater<int>())) {
            break;  // If the array is sorted in descending order, stop
        }
        a.printArray(vec);  // Print the next permutation
    }
n
    return 0;
}
