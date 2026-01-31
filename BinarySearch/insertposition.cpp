 // QNO.34 SEARCH INSERT POSITION


 #include <bits/stdc++.h>
 using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
    
        while (left <= right) {
            int mid = left + (right - left) / 2;
    
            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
    
        // Target not found, left is the insertion point
        return left;
    }

    int main() {
        vector<int> nums;
        int n, target;
    
        cout << "Enter number of elements in the sorted array: ";
        cin >> n;
    
        cout << "Enter the elements : ";
        for (int i = 0; i < n; i++) {
            int element;
            cin >> element;
            nums.push_back(element);
        }
    
        cout << "Enter the target value: ";
        cin >> target;
    
        int insertPos = searchInsert(nums, target);
        cout << "The target should be inserted at index: " << insertPos << endl;
    
        return 0;
    }