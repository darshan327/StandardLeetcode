// time complexity: O(log n)
// space complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>=nums[low]){
                if(target<nums[mid] && target>=nums[low]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(target>nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};

    int main(){
        Solution obj;
        int n,target;
         cin >> n >>target;
         vector<int> res(n);
         for(int i=0; i<n; i++){
          cin>>res[i];
         }
         int val = obj.search(res,target);
          cout << val << endl;
        return 0;
    }