#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<m; j++){
                if(j==0){
                 matrix[i][j]+=min(matrix[i+1][j],matrix[i+1][j+1]);
                }else if(j==m-1){
                    matrix[i][j]+=min(matrix[i+1][j],matrix[i+1][j-1]);
                }else{
                    int minx=min(matrix[i+1][j],matrix[i+1][j-1]);
                    matrix[i][j]+=min(minx,matrix[i+1][j+1]);
                }
            }
        }
        int mini=INT_MAX;
        for(int i=0; i<m; i++){
        mini=min(mini,matrix[0][i]);
        }
        return mini;
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
    int ans = obj.minFallingPathSum(res);
    cout<<ans;
    return 0;
}