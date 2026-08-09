class Solution(object):
    def lengthOfLongestSubstring(self, s):
      mx, start,chars = 0,0,{}
      for i in range(len(s)):
          if s[i] in chars and start <= chars[s[i]]:
                start = chars[s[i]] + 1
          chars[s[i]] = i
          mx = max(mx, i - start + 1)
                
      return mx
            
        