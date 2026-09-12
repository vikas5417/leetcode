class Solution {
public:
    bool isPalindrome(long x) {
        long z=x;
        long y=0;
        if(abs(x)!=x)
            return false;
        while(z)
        {
            y=y*10;
            y+=z%10;
            z=z/10;
        }
        if(y==x)
            return true;
        return false;
    }
};