  
  // time complexity: O(n)
  // space complexity: O(n)


 #include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);

        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

     
        string result = "";

        for (int i = 0; i < words.size(); i++) {
            result = result + words[i];

            if (i < words.size() - 1) {
                result += " ";
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Reversed words: " << obj.reverseWords(s);

    return 0;
}