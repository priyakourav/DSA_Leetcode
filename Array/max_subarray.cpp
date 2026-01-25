// QNO. Maximum Subarray Sum

// Given an integer array, find the contiguous subarray (containing at least one number) which has 
// the largest sum and return its sum.

#include <iostream> 
using namespace std;

int maxSubArray(int arr[], int n) {
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum = maxSubArray(arr, n);
    std::cout << "Maximum subarray sum is " << max_sum;
    return 0;
}