#include<bits/stdc++.h>
using namespace std;


//main soln starts
void zerosMat(vector<vector<int>>& matrix,int x,int y){
        int n = matrix.size();
        int m = matrix[0].size(); 
        for(int j=0;j<m;j++){
            matrix[x][j]=0;
        }
        for(int i=0;i<n;i++){
            matrix[i][y]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>>zeros;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    zeros.push_back({i,j});
                }
            }
        }
        for(auto i:zeros){
            zerosMat(matrix,i.first,i.second);
        }
    }
//main soln ends


int main(){
  vector<vector<int>>matrix[[1,1,1],[1,0,1],[1,1,1]];
  setZeroes(matrix);
  for(auto in_vec:matrix){
    for(int i:in_vec){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
