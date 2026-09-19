class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        if(s[0]=='-') return false;
        string ss=s;
        reverse(s.begin(),s.end());
        if(ss==s) return true;
    return false;          
    }
};