// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0;
        for(int i=0; i<nums.size(); i++){
            one=one^nums[i];
        }
        return one;
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
    int ans = obj.singleNumber(res);
    cout<<ans;
    return 0;
   }