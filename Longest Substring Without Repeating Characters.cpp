
// O(N)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.length() == 0) return 0;
        int start = 0;
        int end = 0;
        int max_substring = INT_MIN;
        
        
        set<char> cset;
        
        
        while (end < s.length()){
            
            if (cset.count(s[end]) == 0){
                
                cset.insert(s[end++]);
                max_substring = max (max_substring, end - start);
                
            }
            
            else {
                
                cset.erase(s[start++]);
                
            }

        }

    return max_substring;
    }
};