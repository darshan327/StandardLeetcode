#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int,int>fre;
      int n=nums.size();
      for(int x : nums){
        fre[x]++;
      }
      for(auto p : fre){
        if(p.second>n/2){
            return p.first;
        }
      }
      return -1;
    }
};


  int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans = obj.majorityElement(res);
    cout<<ans;
    return 0;
  }