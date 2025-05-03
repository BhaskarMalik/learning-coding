 #include<iostream>
 using namespace std;

 int main(){
    //int r;
   // cin>>r;
    //for(int i=1;i<=r;i++){
    //    for(int j=1;j<=i;j++){
    //        cout<<"*";
    //    
    //    }
    //    cout<<endl;
    //}
    //int r;
    //cin>>r;
    //for(int i=1;i<=r;i++){
    //    for(int j=1;j<=i;j++){
    //        cout<<i;
    //    
    //    }
    //    cout<<endl;
    //}
    int r;
    cin>>r;
    char ch='A';
    for(int i=1;i<=r;i++){

        for(int j=1;j<=i;j++){
            cout<<ch;
        
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
 }
