class Solution {
public:
    int characterReplacement(string s, int k) {
        
        // 2 Pointer for sliding window
        int begin = 0;
        int end = 0;
        
        // Var to hold current most frequent char amount and longest window recorded
        int most_freq = 0;
        int max_len = 0;
        
        map<char,int> c_map;
        
        
        while (end < s.size()){
            
            // Populate map with char frequency
            c_map[s[end]]++;
            
            // Update and Save most frequent char amount
            most_freq = max(most_freq, c_map[s[end]]);
            
            // If window size - most_freq char amount is more than k (allowed replacements), then window is not valid
            if ((end - begin +1) - most_freq > k){
                // Decrement begin val from char frequency
                c_map[s[begin]]--;
                // Increment beginning of window
                begin++;
            }
            // Update and save max_len by calculating window size
            max_len = max (max_len, end - begin +1);
            // increment right side of window
            end++;
 
        }
 
    return max_len;    
    }
};