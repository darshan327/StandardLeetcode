// time complexity: O(n*k) 
// space complexity: O(n*k) 


#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> st;
        stack<string> str;
        int num=0;
        string curr="";
        for(int i=0; i<s.size(); i++){
           if(isdigit(s[i])){
            num=num*10+s[i]-'0';
           }
           else if(s[i]=='['){
            st.push(num);
            str.push(curr);
            num=0;
            curr="";
           }
           else if(s[i]==']'){
             int repeat = st.top();
             st.pop();
             string prev =  str.top();
             str.pop();
             string temp="";
             for(int i=0; i<repeat; i++){
                temp+=curr;
             }
             curr=prev+temp;
           }else{
            curr+=s[i];
           }
        }
        return curr;
    }
};


  int main(){
    Solution obj;
    string res;
    getline(cin,res);
    string ans = obj.decodeString(res);
    cout<<ans<<" ";
    return 0;
  }