// time conplexity: O(log n)
// space complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        int low=1,high=nums.size()-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }else{
                  high=mid-1;
            }
        }
        return -1;
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
    int ans = obj.findPeakElement(res);
    cout<<ans;
    return 0;
   }