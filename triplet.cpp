
// Leetcode number : 334. Increasing Triplet Subsequence.

// we should find increaseing triplet subsequence exist in the given array or not.
  // Time complexity : O(n) n is the number of elements in the array.
  // space complexity : O(1) we are using only variable.


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int first=INT_MAX,second=INT_MAX;
         for(int i=0; i<nums.size(); i++){
            if(first>=nums[i]){
                first=nums[i];
            }else if(second>=nums[i]){
                second=nums[i];
            }else{
                return true;
            }
         }
              return false;

    }
};