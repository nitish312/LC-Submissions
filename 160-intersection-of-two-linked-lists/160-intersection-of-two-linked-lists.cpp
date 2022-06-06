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
    
    int getLength(ListNode* temp){
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        } 
        return len;
    }
    
    ListNode* differenceMove(ListNode* temp, int small, int big){
        int diff = big - small;
        while(diff--){
            temp = temp->next;
        }
        return temp;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* dummy1 = headA;
        ListNode* dummy2 = headB;
        
        int len1 = getLength(dummy1);
        int len2 = getLength(dummy2);
        
        dummy1 = headA;
        dummy2 = headB;
        
        if(len1 < len2) dummy2 = differenceMove(dummy2, len1, len2);
        else dummy1 = differenceMove(dummy1, len2, len1);
        
        while(dummy1 && dummy2){
            
            if(dummy1 == dummy2) return dummy1;
            
            dummy1 = dummy1->next;
            dummy2 = dummy2->next;
        }
        
        return NULL;
    }
};