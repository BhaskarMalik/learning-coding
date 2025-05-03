#include <iostream>

using namespace std;

void MinMax(int s, int arr[]){
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<s;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
        else{
            continue;
        }
    }    
    cout<<"Maximum value in the array is: "<<max<<endl;
    cout<<"Minimum value in the array is: "<<min<<endl;

    swap(min,max);
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
}



int main(){
    int s;
    cout<<"enter size of array: ";
    cin>>s;
    int arr[s];
    cout<<"enter the elements of array: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }

    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MinMax(s,arr);
    

    return 0;

}