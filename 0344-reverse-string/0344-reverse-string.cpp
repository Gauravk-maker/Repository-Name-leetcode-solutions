class Solution {
public:
    void reverseString(vector<char>& s,int i, int j) {
        if(i>=j){
            return;
        }
        swap(s[i], s[j]); 
        reverseString(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
        reverseString( s, 0, s.size() - 1);

    }
};