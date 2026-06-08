// time complexity: O(n)
// space complexity: O(n)


#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        for(int i=0; i<n; i++){
               int flag=0;
                while(!st.empty() && asteroids[i]<0 && st.top()>0){
                   if(st.top()<abs(asteroids[i])){
                      st.pop();
                   }else if(st.top()==abs(asteroids[i])){
                      st.pop();
                      flag=1;
                      break;
                   }else{
                    flag=1;
                      break;
                   }
                }
            if(flag==0)
            st.push(asteroids[i]);
        }
         vector<int> res;
         while(!st.empty()){
            res.push_back(st.top());
            st.pop();
         }
         reverse(res.begin(),res.end());
         return res;
    }
};

     int main(){
        Solution obj;
        int n;
        cin>>n;
        vector<int> res1(n);
        for(int i=0; i<n; i++){
            cin>>res1[i];
        }
        vector<int> ans = obj.asteroidCollision(res1);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
        }
        return 0;
     }