// LeetCode Number : 287. Find the Duplicate Number.
   // we should to find one duplicate element in the given array of n+1 and element of the array with in range of 1 to n.
   // brute force approach 
   class Solution {
     public:
    int findDuplicate(vector<int>& nums) {
      unordered_map<int,int>fre;
      for(int x : nums){
           fre[x]++;
      }
      for(auto p : fre){
        if(p.second>1){
            return p.first;
        }
      }
      return -1;
    }
};

   // optimal approach
   // we can solve this problem by using the concept of linklist cycle detection method.
   // Time complexity : O(n)
   // space complexity : O(1)
      class Solution {
        public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        while(1){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast) break;
        }
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
