// QNO. 704 . Binary Search

// Given a sorted (in ascending order) integer array nums of n elements and a target value,
// write a function to search target in nums. If target exists, then return its index. 
// Otherwise, return -1.


#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        else if (arr[mid] < target) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }
    return -1; 


}


int main() {
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found " << std::endl;
    }
    return 0;
}
