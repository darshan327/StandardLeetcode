#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,flag=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1] && flag==0){
                nums[k++]=nums[i];
                flag=1;    
            }else if(nums[i]!=nums[i-1]){
                nums[k++]=nums[i];
                flag=0;
            }
        }
        return k;
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans = obj.removeDuplicates(res);
    cout<<ans;
    return 0;
}