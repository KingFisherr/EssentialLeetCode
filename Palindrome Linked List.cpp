class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        stack<int> lstack;
        
        ListNode *firstpass = head;
        
        
        while (firstpass){
            
            lstack.push(firstpass->val);
            
            firstpass = firstpass->next;
        
        }
            
        
        while (head){
            
            if (head->val != lstack.top()) return false;
            
            else {
                lstack.pop();
                head = head->next;
            }
            
            
        }
        
    return true;    
            
    }
};