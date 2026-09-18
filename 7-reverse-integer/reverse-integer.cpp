class Solution {
public:
    int reverse(int x) {
        long rev_no=0;
        while(x!=0)
        {
            rev_no=(rev_no*10)+x%10;
            x=x/10;
            if(rev_no>(pow(2,31)-1)||rev_no<pow(-2,31))
                return 0;
        }
        return rev_no;
    }
};