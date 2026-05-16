#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int i = 0;

        while(i < chars.size()) {
            char ch = chars[i];
            int count1 = 0;

            while(i < chars.size() && ch == chars[i]) {
                count1++;
                i++;
            }

            chars[index++] = ch;

            if(count1 > 1) {
                string val = to_string(count1);

                for(char c : val) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<char> res(n);

    for(int i = 0; i < n; i++) {
        cin >> res[i];
    }

    int len = obj.compress(res);

    cout << "Compressed array: ";

    for(int i = 0; i < len; i++) {
        cout << res[i] << " ";
    }

    cout << "\nLength: " << len;

    return 0;
}