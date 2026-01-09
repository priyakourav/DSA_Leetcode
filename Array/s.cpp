// Q no. 123. Write a program to find the second largest element in an array.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
        
    int secondLargest(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > first) {
                second = first;
                first = nums[i];
            } else if (nums[i] > second && nums[i] != first) {
                second = nums[i];
            }
        }
        return second;
    }
};



int main () {
    Solution s;
    vector<int> nums = {3, 5, 2, 9, 5, 9, 1};

    int result = s.secondLargest(nums);

    if (result != INT_MIN) {
        cout << "The second largest element is: " << result << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }
    return 0;
}