class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>lastIndex(26);
        vector<bool>visited(26,false);
        for(int i = 0; i< s.size(); i++){
            lastIndex[s[i]-'a'] = i;
        }
        string stack;
        for(int i = 0;i< s.size(); i++){
            char ch = s[i];
            if(visited[ch - 'a']){
                continue;
            }
            while(!stack.empty() && stack.back() > ch && lastIndex[stack.back()-'a'] > i){
              visited[stack.back() - 'a'] = false;
              stack.pop_back();  
            }
            stack.push_back(ch);
            visited[ch-'a'] = true;
        }
        return stack;

    }
};