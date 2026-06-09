// time complexity: O(n*logn) 
// space complexity: O(n)


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0; i<=n; i++){
            int num = i,count=0;
            while(num>0){
              if(num&1==1){
                count++;
              }
              num=num>>1;
            }
            res.push_back(count);
        }
        return res;
    }
};

     int main(){
        Solution obj;
        int n;
        cin>>n;
        vector<int> ans = obj.countBits(n);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        return 0;
     }