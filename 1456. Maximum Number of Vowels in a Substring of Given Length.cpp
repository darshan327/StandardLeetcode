// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
#include<string>
#include<climits>
using namespace std;

class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int count=0,maxi=INT_MIN;
        for(int i=0; i<k; i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        maxi = max(maxi,count);
          for(int i=k; i<s.size(); i++){
            if(isvowel(s[i])){
                count++;
            }
            if(isvowel(s[i-k])){
                count--;
            }
            maxi=max(maxi,count);
          }
          return maxi;
    }
};

   int main(){
    Solution obj;
     string s;
 getline(cin,s);
    int k;
     cin>>k;
     int ans = obj.maxVowels(s,k);
     cout<<ans;
      return 0;
   }