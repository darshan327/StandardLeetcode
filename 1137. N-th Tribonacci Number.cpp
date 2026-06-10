// time complexity : O(n)
// space complexity : O(1)


#include<iostream>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==2 || n==1){
            return 1;
        }
       int one = 0, two = 1 , three = 1, four=0;
       for(int i=3; i<=n; i++){
         four = one + two + three ;
         one = two;
         two = three;
         three = four;
       }
       return four;
    }
};

   int main(){
    Solution obj;
    int n;
    cin>>n;
    int ans = obj.tribonacci(n);
    cout<<ans;
    return 0;
   }