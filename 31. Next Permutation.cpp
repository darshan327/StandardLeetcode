#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }
        if(i>=0){
            int j=n-1;
            while(nums[i]>=nums[j]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
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
   obj.nextPermutation(res);
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}