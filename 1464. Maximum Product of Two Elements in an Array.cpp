#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first=nums[0],second=-1;
        for(int i=1; i<nums.size(); i++){
              if(nums[i]>=first){
                second=first;
                first=nums[i];
              }   else if(nums[i]>second){
                second=nums[i];
              }
        }
        return (first-1)*(second-1);
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
    int ans = obj.maxProduct(res);
    cout<<ans;
    return 0;
  }


