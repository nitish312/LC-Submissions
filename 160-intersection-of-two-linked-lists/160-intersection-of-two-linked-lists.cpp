/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        while(headB){
            
            ListNode* dummy = headA;
            while(dummy){
                
                if(dummy == headB) return dummy;
                
                dummy = dummy->next;
            }
            
            headB = headB->next;
        }        
        
        return NULL;
    }
};