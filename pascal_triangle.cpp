#include<bits/stdc++.h>
using namespace std;

//main soln starts
 int comb(vector<vector<int>>&dp,int n,int r){
      if(dp[n][r]==-1){
          if(n==r||r==0) dp[n][r]=1;
          else dp[n][r]=comb(dp,n-1,r-1)+comb(dp,n-1,r);  
      }
      return dp[n][r];
  }
  vector<vector<int>> generate(int numRows) {
      vector<vector<int>> dp(numRows,vector<int>(numRows,-1));
      vector<vector<int>> result;
      vector<int> numbers;
      for(int i=0;i<numRows;i++){
          for(int j=0;j<=i;j++){
              numbers.push_back(comb(dp,i,j));
          }
          result.push_back(numbers);
          numbers.clear();
      }
      return result;
  }

//main soln ends

int main(){
  int n=5;
  vector<vector<int>>res=generate(n);
    for(auto in_vec:res){
    for(int i:in_vec){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
