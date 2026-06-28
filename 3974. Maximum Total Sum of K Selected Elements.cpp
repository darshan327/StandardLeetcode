#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(),nums.rend());
        long long sum =0;
        for(int i=0; i<k; i++){
           if(mul>0){
            sum+=1LL*nums[i]*mul;
            mul--;
           }else{
            sum+=nums[i];
            mul--;
           }
        }
        return sum;
    }
};


  int main(){
    Solution obj;
    int n,k,mul;
    cin>>n>>k>>mul;
    vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    long long ans = obj.maxSum(res,k,mul);
    cout<<ans;
    return 0;
  }