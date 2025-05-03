 #include<iostream>
 using namespace std;

 int main(){
 
    int r;
    cin>>r;
    int n=1;
    
    //for(int i=1;i<=r;i++){
//
    //    for(int j=1;j<=i;j++){
    //        cout<<j;
   //     
    //    }//
    //
    //    cout<<endl;
    //}
    // for(int i=1;i<=r;i++){
//
    //    for(int j=i;j>=1;j--){
    //        cout<<j;
    //    
    //    }
    //
    //    cout<<endl;
    //}
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
 }
