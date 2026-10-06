class Solution {
public:
    bool isPalindrome(string& s, int i, int j) {
        if (i >= j) {
            return true;
        }

        if (s[i] != s[j]) {
            return false;
        }

        return isPalindrome(s, i + 1, j - 1);
    }

    bool check(string& s, int i, int j) {
        if (i >= j) {
            return true;
        }

        if (s[i] == s[j]) {
            return check(s, i + 1, j - 1);
        }

        return isPalindrome(s, i + 1, j) ||
               isPalindrome(s, i, j - 1);
    }

    bool validPalindrome(string s) {
        return check(s, 0, s.length() - 1);
    }
};