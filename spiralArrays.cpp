#include <iostream>
#include<vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &mat){
    int m=mat.size(),n=mat[0].size();

    int srow=0,scol=0,erow=m-1,ecol=n-1;
    vector<int> ans;

    while(srow<=erow && scol<=ecol){
        for(int j=scol;j<=ecol;j++){
            ans.push_back(mat[srow][j]);
        }
        for(int j=srow+1;j<=erow;j++){
            ans.push_back(mat[j][ecol]);
        }
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        for(int j=erow-1;j>=srow+1;j--){
            if(scol==ecol){
                break;
            }
            ans.push_back(mat[j][scol]);
        }

        srow++,erow--,scol++,ecol--;
    }

    return ans;
}



int main(){


    vector<vector<int>> mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows=mat.size(),cols=mat[0].size();
    

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    

    vector<int> spiral = spiralOrder(mat);

    cout<<"Spiral order: ";
    for(int num: spiral){
        cout<<num<< " ";

    }
    cout<< endl;


    
    return 0;
}