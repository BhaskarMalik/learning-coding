#include<iostream>

using namespace std;



int main(){
    int vote;
    int v1=0,v2=0,v3=0;
    cout<<"for whom do you want to cast your vote canditate1, 2 or 3 :";
    cin>>vote;
    if(vote==1){
        v1++;
    }
    else if(vote==2){
        v2++;
    }
    else{
        v3++;
    }

    int winner=max(v1,v2,v3);

    cout<<

    return 0;
}