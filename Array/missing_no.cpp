// QNO.268 Missing Number

    // Given an array nums containing n distinct numbers in the range [0, n],
    // return the only number in the range that is missing from the array.


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }

        return expectedSum - actualSum;
    }
};
int main() {
    Solution s;
    vector<int> nums = {3, 0, 1};

    int missing = s.missingNumber(nums);
    cout << "The missing no. is: " << missing << endl;

    return 0;
}