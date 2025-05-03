#include <iostream>
#include <vector>

using namespace std;

int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }

    for(int st=0;st<s;st++){
        for(int end=st;end<s;end++){
            for(int j=st;j<=end;j++){
                cout<<arr[j];

            }
            cout<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}