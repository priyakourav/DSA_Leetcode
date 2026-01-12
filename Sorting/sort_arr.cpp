#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<int> nums = {5, 2, 3, 1};
    vector<int> sortedNums = sortArray(nums);

    for (int x : sortedNums) {
        cout << x << " ";
    }
    return 0;
}
