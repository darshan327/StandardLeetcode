// time complexity: O(n)
// space complexity: O(n)


#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
       string res="";
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
        string res;
        getline(cin,res);
        string ans = obj.removeStars(res);
          cout<<ans;
        return 0;
     }