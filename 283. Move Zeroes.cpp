// time complexity: O(n)
// space complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(),j=0,i=0;
         while(i<n){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            i++;
         }
         while(j<n){
            nums[j]=0;
            j++;
         }
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
        obj.moveZeroes(res);
        for(int i=0; i<res.size(); i++){
            cout<<res[i]<<" ";
        }
        return 0;
    }