#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int flag=0,sum=0,n=nums.size();
        for(int i=0; i<n; i++){
            if(flag==0 && nums[i]!=0) flag=1;
            sum=sum^nums[i];
        }
        if(flag==0) return 0;
       return sum==0?n-1:n;
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
    int ans=obj.longestSubsequence(res);
    cout<<ans;
    return 0;
  }