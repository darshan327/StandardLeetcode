#include<iostream>
#include<vector>
using namespace std;


  class Solution{
    public:
      void SelectionSort(vector<int>& nums){
        for(int i=0; i<nums.size()-1; i++){
          int min=i;
           for(int j=i+1; j<nums.size(); j++){
               if(nums[j]<nums[min]){
                   min=j;
               }
           }
           swap(nums[i],nums[min]);
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
     obj.SelectionSort(res);
     for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
     }
    return 0;
  }