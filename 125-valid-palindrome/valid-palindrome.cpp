class Solution {
public:
    bool check(string &s,int i) {
        if(i>=s.size()/2)
            return true;
        if(s[i]!=s[s.size()-i-1])
            return false;
        return check(s,i+1);
    }
    bool isPalindrome(string s) {
        string temp="";
        for(char x:s)
        {
            if(isalnum(x))
                temp+=tolower(x);
        }
        return check(temp,0);
    }
};