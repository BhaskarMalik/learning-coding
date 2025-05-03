#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;                        //
    //vector<int> v={1, 2, 3, 4};           //types to implement a vector
    //vector<int> v(4, 1);                    //
    v.push_back(2);
    v.push_back(53);
    v.push_back(4);
    v.push_back(33);
   // cout<<v[0]<<" ";                      //
    //cout<<v[1]<<" ";                      //      
   // cout<<v[2]<<" ";                      //                                          
    //cout<<v[3]<<" ";                      //ways to output the values in
    for(int val : v){                       //vectors
        cout<<val<<" ";                     //
    }                                       //
    cout<<endl<<"size: "<<v.size()<<endl;   //using func. size to find size of vector
    
    
    
    cout<<v.front()<<endl;                  //give the first value form the vector
    
    cout<<v.back()<<endl;                   //give the last value form the vector
    
    v.pop_back();                           //removes the last element form the vector    
    
     cout<<"size: "<<v.size()<<endl;
    
    cout<<v.at(2);                          // gives a value at a particular index
    return 0;
}