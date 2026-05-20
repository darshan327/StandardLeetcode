// time complexity: O(n)
// space complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res;
        vector<int> com(A.size() + 1, 0);

        int count = 0;

        for(int i = 0; i < A.size(); i++) {

            if(++com[A[i]] == 2)
                count++;

            if(++com[B[i]] == 2)
                count++;

            res.push_back(count);
        }

        return res;
    }
};

int main() {

    Solution obj;

    int n1, n2;

    cin >> n1 >> n2;

    vector<int> A(n1);
    vector<int> B(n2);

    for(int i = 0; i < n1; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    vector<int> res = obj.findThePrefixCommonArray(A, B);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}