// time complexity: O(n)
// space complexity: O(1)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0,maxi=INT_MIN,i=0,j=0;
        while(i<nums.size()){
            if(nums[i]==0){
                zero++;
            }
            while(zero>k){
                if(nums[j]==0){
                    zero--;
                }
                j++;
            }
            maxi=max(maxi,i-j+1);
            i++;
        }
       return maxi;
    }
};

   int main(){
    Solution obj;
    int n, k;
    cin>>n>>k;
    vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
  
  
    int ans = obj.longestOnes(res,k);
    cout<<ans;
    return 0;
   }