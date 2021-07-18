/*
Time complexity: O(N) 
Space complexity: O(1) 
// TWO POINTER SLIDING WINDOW SOLUTION
*/

class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char, int> map; // Map to hold values from t string
        
        int left = 0;
        int right = 0;
        int length = INT_MAX;
        int counter = t.length(); // Count values inside hashmap
        int head;
        
        
        for (auto c: t){ // Put values from t onto map (char, int)
            map[c]++;
        }
        
        while(right<s.length()){
            
            if(map[s[right++]]-->0) counter--;   //decrement value in map on righth index as long it is greater than 0
                                              // also decrement counter each time until 0 so we know we have found an entire substring  
            while (counter == 0){ // A substring is found
                
                
                if (right - left < length){ // If length of given substring is less than length, update length
                    
                    length = right - left;
                    head = left;   // Update head for lower bound of substring
                }
                
                if (map[s[left++]]++==0) counter++; //Increment value in map on lefth index if it is equal to 0
                
            }
         // If we were looking for max we would update here   
        }
        
    return length == INT_MAX ? "":s.substr(head, length);     
    }
};