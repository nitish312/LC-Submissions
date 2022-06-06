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
    
    void traverse(ListNode* temp1, ListNode* temp2){
        
        while(temp1 || temp2){
            
           
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        
    }
    
    void checkIntersection(ListNode* temp1, ListNode* temp2, ListNode *headA, ListNode *headB){
        
        if(!temp1) temp1 = headB;
        else temp2 = headA;
        
        traverse(temp1, temp2);
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        while(temp1 != temp2){
            temp1 = !temp1 ? headB : temp1->next;
            temp2 = !temp2 ? headA : temp2->next;
        }
        
        return temp1;
    }
};