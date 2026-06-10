// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        nums[1]=max(nums[0],nums[1]);
         for(int i=2; i<nums.size(); i++){
            nums[i]=max(nums[i-1],nums[i]+nums[i-2]);
         }
         return nums[nums.size()-1];
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
    int ans = obj.rob(res);
    cout<<ans;
    return 0;
   }