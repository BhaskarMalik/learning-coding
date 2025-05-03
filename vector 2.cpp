#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &num){
    int val=0;
    for(int v : num){
        val=val^v;
    }

    return val;
}

int main(){
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(1);

    for(int v : vec){
        cout<<v<<" ";

    }

    cout<<endl<<singleNumber(vec);

    return 0;
}