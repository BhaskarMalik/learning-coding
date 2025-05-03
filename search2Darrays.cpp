#include <iostream>
#include<vector>

using namespace std;



class Search2DArray{
    public:
        bool findRow(vector<vector<int>> &mat,int target){
            int r=mat.size(),c=mat[0].size();
            
            int stR=0;
            int endR= r-1;

            while(stR<=endR){
                int midR=stR+(endR-stR)/2;
                if(target>=mat[midR][0] && target<=mat[midR][c-1]){
                    return searchRow(mat,target,midR, c);
                }
                else if(target >mat[midR][c-1]){
                    stR=midR+1;

                }
                else{
                    endR=midR-1;
                }
            }

            return false;
        }


        bool searchRow(vector<vector<int>> &mat,int target,int RowWithElem,int col){
            
            int st=0,end=col-1;

            while(st<=end){
                int mid=st+(end-st)/2;
                if(target==mat[RowWithElem][mid]){
                    return true;
                }
                else if(target > mat[RowWithElem][mid]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return false;
        }

        bool searchArray2D(vector<vector<int>> &mat,int target){
            int rows=mat.size(),cols=mat[0].size();
            
            
            int r=0,c=cols-1;

            while(r<rows || cols>=0){
                if(target==mat[r][c]){
                    return true;
                }
                else if(target< mat[r][c]){
                    c--;
                }
                else{
                    r++;
                }
            }
            return false;

        }

};
 



int main(){

    //vector<vector<int>> mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<vector<int>> mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int rows=5,cols=5;
    Search2DArray a;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"enter the element you want to search: ";
    cin>>target;
    //if(a.findRow(mat,target)){
    //    cout<<"Element is present";
    //}
    //else{
    //    cout<<"Value is not present";
    //}

    if(a.searchArray2D(mat,target)){
        cout<<"Element is present";
    }
    else{
        cout<<"Value is not present";
    }

    return 0;
}