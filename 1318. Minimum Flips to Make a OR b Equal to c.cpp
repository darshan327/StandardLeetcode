// time complexity: O(log(max(a,b,c)))
// space complexity: O(1)

#include<iostream>
using namespace std;

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        while(a>0 || b>0 || c>0){
            int n1 = a&1;
            int n2 = b&1;
            int n3 = c&1;
            if(((n1|n2)!=n3) && (n1==1 && n2==1)){
                count+=2;
            }else if(((n1|n2)!=n3)){
                count++;
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return count;
    }
};


     int main(){
        Solution obj;
        int a,b,c;
        cin>>a>>b>>c;
        int ans = obj.minFlips(a,b,c);
        cout<<ans;
        return 0;
     }
   