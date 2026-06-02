// time complexity: O(n)
//space complexity: O(1)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0,i=0,j=0,maxi=INT_MIN;
        while(i<nums.size()){
            if(nums[i]==0){
                zero++;
            }
            while(zero>1){
                if(nums[j]==0){
                    zero--;
                }
                j++;
            }
            maxi=max(maxi,i-j);   
            i++;
        }
        return maxi;
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
        int ans = obj.longestSubarray(res);
        cout<<ans;
        return 0;
     }