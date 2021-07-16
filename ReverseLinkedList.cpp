/*
Time complexity: O(N) 
Space complexity: O(1) 
*/

// Use pointers to swap head and prev as we traverse thru the linked list creating links to "prev" node 


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev;
        
        prev = NULL;
        
        while(head){
            
            ListNode* temp;
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;            
        }
    return prev;
    }
};