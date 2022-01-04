#include<bits/stdc++.h>
using namespace std;


//main soln starts(WARNING:obviously,not the best solution :p)
  void sortColors(vector<int>& v) {
      int n=v.size();
      int ones = 0;
      int twos = 0;
      int zeros=0;
      for(int i:v){
          if(i==0) zeros++;
          else if(i==1) ones++;
          else if(i==2) twos++;
      }
      for(int i=0;i<zeros;i++){
          v[i]=0;
      }
      for(int i=zeros;i<zeros+ones;i++){
          v[i]=1;
      }
      for(int i=zeros+ones;i<zeros+ones+twos;i++){
          v[i]=2;
      }        
  }
//main soln ends


int main(){
  vector<int>v{2,0,2,1,1,0};
  sortColors(v);
  for(int i:v){
    cout<<i<<" ";
  }
}
