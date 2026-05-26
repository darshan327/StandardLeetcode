// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int area=INT_MIN;
        while(i<j){
           area = max(area,(j-i)*min(height[i],height[j]));
          if(height[i]<=height[j]){
            i++;
          }else{
            j--;
          }
        }
        return area;
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
    int ans = obj.maxArea(res);
    cout<<ans;
    return 0;
  }