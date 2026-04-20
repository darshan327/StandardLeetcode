// Leetcode number : 1823. Find the Winner of the Circular Game

   class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>res;
        for(int i=1; i<=n; i++){
            res.push_back(i);
        }
        int idx=0;
        while(res.size()>1){
          idx=(idx+k-1)%res.size();
            res.erase(res.begin()+idx);
        }
        return res[0];
    }
};


    class Solution {
      public:
    int helper(int n,int k){
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = (ans + k) % i;
        }
        return ans;
    }
    int findTheWinner(int n, int k) {
        return helper(n,k)+1;  
    }
};