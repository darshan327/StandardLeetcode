#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
   public:
     void bubbleSort(vector<int>& nums){
        for(int i=0; i<nums.size()-1; i++){
            for(int j=0; j<nums.size()-i-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
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
     obj.bubbleSort(res);
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
  }