 #include<iostream>

 using namespace std;

 int main(){
     int r;
     cin>>r;

     
     for(int i=0;i<r;i++){

        for(int j=0;j<i;j++){
            cout<<" ";
            
        }
        for(int k=1;k<=r-i;k++){
                cout<<(i+1);
            }
        
    
        cout<<endl;
    }
    return 0;
 }
 
