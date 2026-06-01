// time complexity: O(n)
// space complexity: O(n)


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res1(nums.size(),1);
        vector<int>res2(nums.size(),1);
        for(int i=1; i<nums.size(); i++){
            res1[i]=res1[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--){
            res2[i]=res2[i+1]*nums[i+1];
        }
        for(int i=0; i<nums.size(); i++){
            nums[i] = res1[i]*res2[i];
        }
        return nums;
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
        vector<int> ans = obj.productExceptSelf(res);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    }