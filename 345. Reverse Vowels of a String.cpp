 // time complexity: O(n*k)
 // space complexity: O(n)
 
 class Solution {
   public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        string f="aeiouAEIOU";
        while(i<j){
          while(i<j && f.find(s[i])==string::npos){
            i++;
          }
            while(i<j && f.find(s[j])==string::npos){
            j--;
          }
          swap(s[i],s[j]);
          i++;
          j--;
        }
        return s;
    }
};

  
// time complexity: O(n)
// space complexity: O(1)


class Solution {
public:
      int vowels(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ){
              return true;
        }
        return false;
      }

    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
         while(i<j){
              while(i<j){
                if(vowels(s[i])){
                    break;
                }
                i++;
              }
              while(i<j){
                if(vowels(s[j])){
                    break;
                }
                j--;
              }
              swap(s[i],s[j]);
              i++;
              j--;
         }
         return s;
    }
};
