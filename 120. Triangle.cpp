#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size(), m = triangle[0].size();
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<i+1; j++){
               triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};

  int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<vector<int>> res(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>res[i][j];
        }
    }
    int ans = obj.minimumTotal(res);
    cout<<ans;
    return 0;
  }