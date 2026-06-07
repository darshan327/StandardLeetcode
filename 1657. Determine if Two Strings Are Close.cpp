// time complexity: O(nlogn) 
// space complexity: O(n)


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        vector<int> res1(26,0);
        vector<int> res2(26,0);
        for(int i=0; i<word2.size(); i++){
            res1[word1[i]-'a']++;
        }
        for(int i=0; i<word2.size(); i++){
             res2[word2[i]-'a']++;
        }

            for(int i=0; i<26; i++){
                if((res1[i]==0)!=(res2[i]==0)){
                    return false;
                }
            }

        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        return res1==res2;
    }
};

     
     int main(){
        Solution obj;
        string word1,word2;
        getline(cin,word1);
        getline(cin,word2);
        bool ans = obj.closeStrings(word1,word2);
        cout<<ans;
        return 0;
     }