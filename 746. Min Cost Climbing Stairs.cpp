// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i=2; i<cost.size(); i++){
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
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
    int ans = obj.minCostClimbingStairs(res);
    cout<< ans;
    return 0;
   }