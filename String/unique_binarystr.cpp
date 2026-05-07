//QNO.1980 UNIQUE BINARY STRING

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findDifferentBinaryString(vector<string>& nums) {
    int n = nums.size();
    string result(n, '0');
    
    for (int i = 0; i < n; ++i) {
        if (nums[i][i] == '0') {
            result[i] = '1';
        }
    }
    
    return result;
}

int main() {
    vector<string> nums = {"01", "10"};
    string output = findDifferentBinaryString(nums);
    cout << output << endl; 
    return 0;
}