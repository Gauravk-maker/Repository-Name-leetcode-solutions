class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        int n= s.size();
        for(int i = 0; i<n; i++){
            freq[s[i]]++;
        }

        int longest = 0;
        for(int i = 0; i<128; i++){
            longest = longest+(freq[i] / 2)*2;
        }
        if(longest<n){
            longest++;
        }
            return longest;
    }
};