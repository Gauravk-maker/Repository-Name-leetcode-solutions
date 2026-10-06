class Solution {
public:
    bool checkPalindrome(string& s, int i, int j) {
        if (i >= j) {
            return true;
        }
        if (!isalnum(s[i])) {
            return checkPalindrome(s, i + 1, j);
        }

        if (!isalnum(s[j])) {
            return checkPalindrome(s, i, j - 1);
        }

        if (tolower(s[i]) != tolower(s[j])) {
            return false;
        }

        return checkPalindrome(s, i + 1, j - 1);
    }

    bool isPalindrome(string s) {
        return checkPalindrome(s, 0, s.length() - 1);
    }
};