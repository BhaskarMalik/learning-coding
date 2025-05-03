#include <iostream>
#include<vector>
using namespace std;




int getmaxsumR(int mat[][3],int rows, int cols){
    int maxRsum=mat[0][0];

    for(int i=0;i<rows;i++){
        int rowSum=0;
        for(int j=0;j<cols;j++){
            rowSum+=mat[i][j];

        }
        maxRsum=max(maxRsum,rowSum);
    }
  
    return maxRsum;
}

int getmaxsumC(int mat[][3],int rows, int cols){
    int maxCsum=mat[0][0];

    for(int i=0;i<rows;i++){
        int colSum=0;
        for(int j=0;j<cols;j++){
            colSum+=mat[j][i];

        }
        maxCsum=max(maxCsum,colSum);
    }
  
    return maxCsum;
}

int getsumD(int mat[][3],int rows, int cols){
    //int Dsum=mat[0][0];
    int Dsum = 0;
    for(int i=0;i<rows;i++){
        //for(int j=0;j<cols;j++){
        //    if(i==j || j == cols-1-i){
        //        Dsum+=mat[i][j];
        //    }
        //}
        Dsum+=mat[i][i];
        if(i != cols-i-1){
            Dsum+=mat[i][cols-i-1];
        }
    }
  
    return Dsum;
}



int main(){

    int rows=3,cols=3;
    //cout<<"Enter the number of rows and columns of matrix: ";
    //cin>>rows>>cols;

    int matrix[3][3];

    vector<vector<int>> mat;
    cout<<"enter the elements of the matrix: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
        
    }


    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<getmaxsumR(matrix,rows,cols)<<endl;
    cout<<getmaxsumC(matrix,rows,cols)<<endl;
    cout<<getsumD(matrix,rows,cols)<<endl;
    return 0;
}