// time complexity: O(n1+n2)
// space complexity: O(n1+n2)

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<int>res1,res2;
        unordered_set<int>st1(nums1.begin(),nums1.end());
        unordered_set<int>st2(nums2.begin(),nums2.end());
        for(int x : st1){
            if(st2.find(x)==st2.end()){
                res2.push_back(x);
            }
        }
        for(int p : st2){
            if(st1.find(p)==st1.end()){
                res1.push_back(p);
            }
        }
        return {res2,res1};
    }
};


    int main(){
        Solution obj;
        int n1,n2;
        cin>>n1>>n2;
        vector<int> res1(n1);
        vector<int> res2(n2);
        for(int i=0; i<n1; i++){
            cin>>res1[i];
        }
        for(int i=0; i<n2; i++){
            cin>>res2[i];
        }
        vector<vector<int>> ans = obj.findDifference(res1,res2);
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                cout<<ans[i][j]<<" ";
            }
        }
        return 0;
    }