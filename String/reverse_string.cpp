//QNO.344 REVERSE STRING


#include <bits/stdc++.h>

class Solution {

public:

    void reverseString(std::vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};

    int main()
    {
        std::vector<char> s={'h','e','l','l','o'};
        Solution obj;
        obj.reverseString(s);
        for(int i=0;i<s.size();i++)
        {
            std::cout<<s[i]<<" ";
        }
        return 0;
    }

