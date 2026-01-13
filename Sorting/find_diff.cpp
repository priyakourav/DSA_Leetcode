
// Q no. 389. Find the Difference


#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {

        char ans = 0;

        for (char c : s) {
            ans ^= c;
        }

        for (char c : t) {
            ans ^= c;
        }

        return ans;
    }
};


int main() {
    Solution s;
    string str1 = "abcd";
    string str2 = "abcde";

    char result = s.findTheDifference(str1, str2);

    cout << "The difference is: " << result << endl;

    return 0;
}