#include<bits/stdc++.h>
using namespace std;


//main soln starts
  void nextPermutation(vector<int>& nums) {
      int n=nums.size();
      int cnt=0;
      for(int i=1;i<n;i++){
          if(nums[i-1]>=nums[i])
              cnt++;
      }
      if(cnt==n-1) sort(nums.begin(),nums.end());
      else next_permutation(nums.begin(),nums.end());
  }
//main soln ends


int main(){
  vector<int>nums{1,2,3};
  nextPermutation(nums);
  for(int i:nums){
    cout<<i<<" ";
  }
}
