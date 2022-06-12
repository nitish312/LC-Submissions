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
    ListNode* rotateRight(ListNode* head, int k){
        
        if(!head) return head;
        
        int totalNodes = 1; // number of nodes
        
        ListNode *newHead, *tail;
        newHead = tail = head;
        
        while(tail->next){  // get the number of nodes in the list
        
            tail = tail->next;
            totalNodes++;
        }
        tail->next = head; // circle the link

        if(k %= totalNodes ){
            
            for(auto i=0; i<totalNodes - k; i++){
                
                tail = tail->next; // the tail node is the (len-k)-th node (1st node is head)
            }       
        }
        
        newHead = tail->next; 
        
        tail->next = NULL;
        
        return newHead;
    }
};