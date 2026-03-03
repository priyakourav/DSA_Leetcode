  //QNO.242 VALID ANAGRAM
  // Given two strings s and t, return true if t is an anagram of s, and false otherwise.
  
// An Anagram is a word or phrase formed by rearranging the letters of a 
// different word or phrase, typically using all the original letters exactly once.


  #include <iostream>
  #include <string>
  #include <algorithm>
  using namespace std;


  class Solution {

  public:
       bool isAnagram(string s, string t) {
           if(s.length() != t.length()) return false;
           sort(s.begin(), s.end());
           sort(t.begin(), t.end());
           return s == t;
       }
    };
    int main() {
        string s, t;
        cout << "Enter first string: ";
        cin >> s;
        cout << "Enter second string: ";
        cin >> t;

        Solution sol;
        if(sol.isAnagram(s, t)) {

            cout << "The strings are anagrams." << endl;
        } else {
            
            cout << "The strings are not anagrams." << endl;
        }

        return 0;
    }
