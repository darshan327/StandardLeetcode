  // time complexity: O(log n)
  // space complexity: O(1)
  
  
  #include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;

        while (low <= high) {

            int mid = (low + high) / 2;

            // Left half sorted
            if (nums[mid] >= nums[low]) {

                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else {

                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    int n;
    cin >> n;

    vector<int> res(n);

    for (int i = 0; i < n; i++) {
        cin >> res[i];
    }

    int ans = obj.findMin(res);

    cout << "Minimum element: " << ans;

    return 0;
}