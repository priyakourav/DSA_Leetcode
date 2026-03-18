//QNO. FIRST UNIQUE CHARACTER IN A STRING

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {


        int charCount[ 26] = { 0 };

        // Count the frequency of each character
        for (char c : s) {
            charCount[c - 'a']++;
        }

        // Find the index of the first unique character
        for (int i  = 0; i < s.length(); i++) {
            if (charCount[s[i] - 'a'] == 1) {
                return i; // Return the index of the first unique character
            }
        }

        return -1; // Return -1 if there is no unique character
    }
};


int main() {
    Solution solution;
    string s = "leetcode";

    int index = solution.firstUniqChar(s);

    if (index != -1) {
        cout << "The first unique character is '" << s[index] << "' at index " << index << "." << endl;
    } 
    else   {


        cout << "There is no  unique  character  in the string. " << endl;
    }

    return 0;
}