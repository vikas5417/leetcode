class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        int i=0;
        int k=0;
        int start=0;
        while(i<haystack.length())
        {
            if(haystack[i]==needle[k])
            {
                i++;
                k++;
                if(k==needle.length())
                    return start;
            }
            else
            {
                start++;
                i=start;
                k=0;
            }
        }
        return -1;
    }
};