   // time complexity : O(n)


      class Solution {
        public:
       
        int gcd(int m, int n){
             while(n>0){
                int r=m%n;
                m=n;
                n=r;
             }
             return m;
        } 

    string gcdOfStrings(string str1, string str2) {
       if(str1+str2!=str2+str1) return "";
       int len= gcd(str1.size(),str2.size());
       return str1.substr(0,len);
    }
};