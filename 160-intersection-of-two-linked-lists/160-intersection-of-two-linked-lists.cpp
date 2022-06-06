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
        
        ListNode* dummy1 = headA;
        ListNode* dummy2 = headB;
        
        int len1 = 0, len2 = 0;
        while(dummy1){
            
            len1++;
            dummy1 = dummy1->next;
        } 
        while(dummy2){
            
            len2++;
            dummy2 = dummy2->next;
        } 
        
        dummy1 = headA;
        dummy2 = headB;
        
        int diff;
        if(len1 < len2){
            
            diff = len2 - len1;
            while(diff--) dummy2 = dummy2->next;
        }
        else{
            
            diff = len1 - len2;
            while(diff--) dummy1 = dummy1->next;
        }
        
        while(dummy1 && dummy2){
            
            if(dummy1 == dummy2) return dummy1;
            
            dummy1 = dummy1->next;
            dummy2 = dummy2->next;
        }
        
        return NULL;
    }
};