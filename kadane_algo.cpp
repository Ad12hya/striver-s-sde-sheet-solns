#include<bits/stdc++.h>
using namespace std;


//main soln starts
  int maxSubArray(vector<int>& nums) {
      int max_here = nums[0];
      int max_so_far = nums[0];
      for(int i=1;i<nums.size();i++){
          max_here=max(nums[i],max_here+nums[i]);
          max_so_far=max(max_so_far,max_here);
      }
      return max_so_far;
  }
//main soln ends


int main(){
  vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
  cout<<maxSubArray(nums);
}
