// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN,avg=0;
        for(int i=0; i<k; i++){
           avg+=nums[i];
        }
        maxi = max(maxi,avg/k);
        for(int i=k; i<nums.size(); i++){
            avg=avg+nums[i]-nums[i-k];
            maxi = max(maxi,avg/k);
        }
        return maxi;
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
     int ans = obj.findMaxAverage(res,k);
     cout<< ans;
    return 0;
   }