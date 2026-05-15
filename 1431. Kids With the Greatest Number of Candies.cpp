// time complexity: O(n)
// space complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi = candies[0];
        vector<bool> res;
        for (int i = 1; i < candies.size(); i++) {
            if (maxi < candies[i]) {
                maxi = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++) {

            if (candies[i] + extraCandies >= maxi) {
                res.push_back(true);
            }
            else {
                res.push_back(false);
            }
        }

        return res;
    }
};

int main() {

    Solution obj;

    int n;
    cout << "Enter number of kids: ";
    cin >> n;

    vector<int> candies(n);

    cout << "Enter candies: ";
    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    int extraCandies;
    cout << "Enter extra candies: ";
    cin >> extraCandies;

    vector<bool> ans = obj.kidsWithCandies(candies, extraCandies);

    cout << "Output: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}