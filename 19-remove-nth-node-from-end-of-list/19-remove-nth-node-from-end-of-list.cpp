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
        
        while(n--){
            
            fast = fast->next;
        }
        
        ListNode* delNode;
        if(!fast){
            
            delNode = head;
            head = head->next;
            delete delNode;
            return head;
        }
        
        while(fast->next){
            
            fast = fast->next;
            slow = slow->next;
        }
        
        delNode = slow->next;
        slow->next = delNode->next;
        delete delNode;
        
        return head;
    }
};