//QNO.18  4SUM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skipping duplicates

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;

                        while (left < right && nums[left] == nums[left - 1]) left++; // Skip duplicates
                        while (left < right && nums[right] == nums[right + 1]) right--; // Skip duplicates
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = solution.fourSum(nums, target);

    cout << "Quadruplets that sum to " << target << ":" << endl;
    for (const auto& quadruplet : result) {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); i++) {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}