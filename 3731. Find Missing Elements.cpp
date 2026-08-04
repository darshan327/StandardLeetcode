#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         int maxi=nums[0];
         int mini=nums[0];
         for(int i=1; i<nums.size(); i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
         }
       
        vector<int>res;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=mini+1; i<maxi; i++){
            if(st.find(i)==st.end()){
                res.push_back(i);
          }
        }
        return res;
    }
};

    int main(){
        Solution obj;
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> res1=obj.findMissingElements(arr);
        for(int i=0; i<res1.size(); i++){
            cout<<res1[i]<<" ";
        }
        return 0;
    }