   // Leetcode Number : 191. Number of 1 Bits

    // time complexity : O(1) since we are iterating through 32 bits only
     // space complexity : O(1) since we are using only constant space to store count and n

   class Solution {
     public:
    int hammingWeight(int n) {
        int count=0;
        for(int i=0; i<32; i++){
            if(n&1)count++;
            n=n>>1;
        }
        return count;
    }
};