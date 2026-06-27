#include<iostream>
#include<queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int> qu;
     for(int i=0; i<nums.size(); i++){
        qu.push(nums[i]);
     }
     for(int i=0; i<k-1; i++){
        qu.pop();
     }
     return qu.top();
    }
};

 int main(){
    Solution obj;
    int n,k;
    cin>>n>>k;
    vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans=obj.findKthLargest(res,k);
    cout<<ans;
    return 0;
 }