  //Leetcode Number 53. Maximum Subarray

  // Explaination : we should to find longest sum in the given subarray.
  // Time complexity : O(n) where n is the number of element in the array.
  // space complexity : O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int num=nums[0],maxi=nums[0];
        for(int i=1; i<nums.size(); i++){
            maxi=max(nums[i],maxi+nums[i]);
            num=max(num,maxi);
        }
        return num;
    }
};