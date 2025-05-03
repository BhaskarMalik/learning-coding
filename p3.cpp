#include <iostream>

using namespace std;

int main(){
  //  int n;
  //  cin>>n;
  //  int p= 1;
  //  for(int i=1;i<=n;i++){
  //      for(int j=1;j<=n;j++){
  //          cout<<p;
  //          p++;
  //      }
  //      cout<<endl;
  //  }
//
    int r;
    cin>>r;
    char ch='A';
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;

}