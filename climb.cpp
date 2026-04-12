// Leetcode number: 70. Climbing Stairs

/* Explaination: At each time you can climb one step or two step, how many different ways you can form.
   initial we have 1 and 2,then we are to add previous two value  */
 // Time complexity : O(n)
 // space complexity : O(1).

class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
     int first=1;
     int second=2;
     int third=0;
      for(int i=2; i<n; i++){
         third=first+second;
          first=second;
          second=third;
      }
        return third;
    }
};

 // this is  dp method
 // time complexity : O(n)
 // space complexity: O(n)
   class Solution {
  public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

// recursive method 
// Time complexity : O(2^n)
// space complexity : O(n)
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return climbStairs(n-1) + climbStairs(n-2);
    }
};
