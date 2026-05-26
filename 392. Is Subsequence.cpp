// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
       return i==s.size();
    }
};

   int main(){
    Solution obj;
    string s,t;
    getline(cin,s);
    getline(cin,t);
    bool val = obj.isSubsequence(s,t);
    cout<<val;
    return 0;
   }