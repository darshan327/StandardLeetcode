// time complexity: O(nlogn) + O(n) = O(nlogn)
// space complexity: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1,count=0;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==k){
                count++;
                i++;
                j--;
            }else if(sum<k){
                i++;
            }else{
                j--;
            }
        }
        return count;

    }
};

   int main(){
    Solution obj;
    int n,k;
    cin>>n>>k;
    vector<int> res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans = obj.maxOperations(res,k);
    cout<< ans;
    return 0;
   }