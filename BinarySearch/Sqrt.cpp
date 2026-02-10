//QNO. 69 SQUARE ROOT

// sqrt(x) is the greatest integer that is less than or equal to the square root of x.

#include <bits/stdc++.h>
class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int left=1;
        int right=x;
        int ans=0;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(mid<=x/mid)
            {
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return ans;
    }
};

    int main()
    {
        int x=16;
        Solution obj;
        int result=obj.mySqrt(x);
        std::cout<<result;
        return 0;
    }