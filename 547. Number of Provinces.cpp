#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

      void dfs(int start,vector<vector<int>>& graph, vector<int>& visited){
          visited[start]=1;
          for(int i=0; i<graph.size(); i++){
              if(graph[start][i] && !visited[i]){
                dfs(i,graph,visited);
              }
          }
      }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),count=0;
        vector<int> visited(n,0);
         for(int i=0; i<n; i++){
            if(!visited[i]){
            dfs(i,isConnected,visited);
            count++;
            }
         }
         return count;
    }
};

  int main(){
    Solution obj;
     int n,m;
     cin>>n>>m;
     vector<vector<int>> graph(n,vector<int>(m));
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>graph[i][j];
        }
     }
     int ans = obj.findCircleNum(graph);
     cout<<ans;
    return 0;
  }