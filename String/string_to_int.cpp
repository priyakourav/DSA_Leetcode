// LeetCode 8: String to Integer (atoi)
// Pattern: String Parsing
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int result = 0;
        int sign = 1;
        int i = 0;
        int n = str.length();

        // 1. Skip leading whitespaces
        while (i < n && isspace(str[i])) {
            i++;
        }

        // 2. Handle sign
        if (i < n && (str[i] == '+' || str[i] == '-')) {
            sign = (str[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits to integer
        while (i < n && isdigit(str[i])) {
            int digit = str[i] - '0';

            // 4. Handle overflow
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};

int main() {
    Solution solution;
    string str = "   -42";
    cout << "Converted integer: " << solution.myAtoi(str) << endl;
    return 0;
}