// time complexity: O(n)
// space complexity: O(n)


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> res1(n,0);
        vector<int> res2(n,0);
          res1[0]=nums[0];
          res2[n-1]=nums[n-1];
        for(int i=1; i<n; i++){
            res1[i]=res1[i-1]+nums[i];
        }
        for(int i=n-2; i>=0; i--){
            res2[i]=res2[i+1]+nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            if(res1[i]==res2[i]){
                return i;
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
        int ans = obj.pivotIndex(res);
        cout<<ans;
        return 0;
     }