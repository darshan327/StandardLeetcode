 // LeetCode Number: 189. Rotate Array
 

   // first reversing whole array, next till k reverse and remaining element reverse except starting k element.
   // time complexity : O(n)
   // space complexity : O(1);
   class Solution {
      public:
       void rotate(vector<int>& nums, int k) {
      int n=nums.size();
            k=k%n;

      reverse(nums.begin(),nums.end());

      reverse(nums.begin(),nums.begin()+k );

      reverse(nums.begin()+k,nums.end());
        
        
    }
};  

  // direct method 
     // time complexity : O(n)
 // space complexity : O(n);
     class Solution {
      public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
          k=k%n;
          int j=0;
        vector<int> temp(k);
          for(int i=n-k; i<n; i++){
             temp[j++]=nums[i];
          }
          for(int i=n-k-1; i>=0; i--){
             nums[i+k]=nums[i];
          }
          for(int i=0; i<k; i++){
            nums[i]=temp[i];
          }
        
    }
};