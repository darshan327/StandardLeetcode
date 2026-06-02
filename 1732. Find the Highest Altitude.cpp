// time complexity: O(n)
// space complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0,sum=0;
        for(int i=0; i<gain.size(); i++){
            sum+=gain[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};

   int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int> res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans = obj.largestAltitude(res);
    cout<<ans;
    return 0;
   }