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
    
    int length(ListNode* head){
        
        int len = 0;
        ListNode* temp = head;
        while(temp){
            
            len++;
            temp = temp->next;
        }
        
        return len;
    }
    
    ListNode* rotateRight(ListNode* head, int k){
        
        if(!head || !head->next) return head;
        
        ListNode *ptr, *prev;
        ptr = head;
        prev = NULL;
        
        k = k % length(head);
        
        for(int i=0; i<k; i++){
            
            while(ptr->next){
                
                prev = ptr;
                ptr = ptr->next;
            }
            
            ptr->next = head;
            prev->next = NULL;
            head = ptr;
        }
        
        return head;
    }
};