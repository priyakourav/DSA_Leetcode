
//QNO.125 VALID PALINDROME

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {

        // skip non-alphanumeric from left
        while (i < j && !isalnum(s[i])) {
            i++;
        }

        // now  from right side 
        while (i < j && !isalnum(s[j])) {
            j--;
        }

        // convert to lowercase and compare
        if (tolower(s[i]) != tolower(s[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);   

    if (isPalindrome(s)) {
        cout << " Its Palindrome  " << endl;
    } else {
        cout << " It is not a palindrome " << endl;
    }

    return 0;
}
