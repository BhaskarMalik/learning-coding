#include<iostream>

using namespace std;
void reverseArray(int s, int arr[]){
    int start=0;
    int end=s-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void sumOf(int s, int arr[]){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all elements in the array is: "<<sum;

}

void UniqueValue(int arr[], int s){
    //not working as expected
    cout<<"All unique values in the array are: ";

    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            
            if(i==j){
                continue;
            }
            else if(arr[i]==arr[j] ){
                break;
            }
            else{
                
                cout<<arr[i]<<" ";
                break;
            }
        }
        continue;
        
    }
}

void intersectionArrays(int s, int arr[], int s2, int arr2[] ){
    //not printing any output
    
    cout<<"Intersection of both array is: ";
    for(int i=0;i<s;i++){
        for(int j=0;j<s2;j++){
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<" ";
                break;
            }
            
        }
    }
}

void searchArray(int e, int arr[],int s){
    for(int i=0;i<s;i++){
        if(arr[i]==e){
            cout<<"Element is present at index: "<<i;
            break;
        }
        else{
            continue;
        }
    }
    if(arr[s]!=e){
        cout<<"Element is not present in the array";
    }
}


void printArray(int s, int arr[]){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int s,s2;
    cout<<"Enter the size of arrays: ";
    cin>>s>>s2;
    int arr[s],arr2[s2];
    cout<<"Enter the elements of array 1: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of array 2: ";
    for(int i=0;i<s2;i++){
        cin>>arr[i];
    }
    //printArray(s,arr);
    //int e;
    //cout<<"Enter the element to search: ";
    //cin>>e;
    //searchArray(e,arr,s);
    //reverseArray(s, arr);
    //cout<<"Reverse array: "<<printArray(s,arr);
    //UniqueValue(arr, s);
    intersectionArrays(s, arr,s2,  arr2 );
    return 0;
}