// time complexity: O(n)
// space complexity: O(n)


#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>fre;
        vector<int>res;
        for(int i=0; i<arr.size(); i++){
            fre[arr[i]]++;
        }
        for(auto p : fre){
            res.push_back(p.second);
        }
        unordered_set<int>st(res.begin(),res.end());
          return res.size()==st.size();
    }
};

   int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int>res(n);
    for(int i=0; i<n; i++){
       cin>>res[i];
    }
    bool ans = obj.uniqueOccurrences(res);
    cout<<ans;
    return 0;
   }