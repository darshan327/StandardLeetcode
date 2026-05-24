// time complexity: O(n^2)
// space complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int ans = 0;
        vector<int> dp(nums.size(),1);
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                  dp[i] = max(dp[i],1+dp[j]);
                }
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};

   int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int> res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int val = obj.lengthOfLIS(res);
    cout<< val;
    return 0;
   }