#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,mi=prices[0];
        for(int i=1; i<prices.size(); i++){
            
             profit=max(profit,prices[i]-mi);
             mi=min(mi,prices[i]);
        }
       return profit;
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
    int ans=obj.maxProfit(res);
    cout<<ans;
    return 0;
}