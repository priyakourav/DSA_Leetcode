//QNO.1848 Minimumy Distance to the Target Element
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>


using namespace std;
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDistance = INT_MAX;
        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                minDistance = min(minDistance, abs(static_cast<int>(i) - start));
            }
        }
        return minDistance;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;
    int start = 0;

    int result = solution.getMinDistance(nums, target, start);
    cout << "Minimum distance to the target element: " << result << endl;

    return 0;
}
