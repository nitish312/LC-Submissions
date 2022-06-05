/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* fast = head; 
        ListNode* slow = head;
        
        while(n--) fast = fast -> next;      // iterate first n nodes using fast
        
        if(!fast){ // if fast == NULL
            
            // ListNode* delNode = head;
            // head = head->next;
            // delete delNode;
            // return head; 
            return head->next;
        } // if fast is already null, it means we have to delete head itself. So, just return next of head
        
        while(fast -> next){
            
            fast = fast -> next;
            slow = slow -> next;
        } // iterate till fast reaches the last node of list
                        
        
        // slow -> next = slow -> next -> next; // remove the nth node from last
        
        ListNode* delNode = slow->next;
        slow->next = delNode->next;
        delete delNode;
        
        return head;
    }
};