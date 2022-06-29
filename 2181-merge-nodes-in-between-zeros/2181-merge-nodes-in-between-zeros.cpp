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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* pre = new ListNode(0);
        ListNode* ptr = pre;
        ListNode* temp = head;
        
        int sum = 0;
        temp = temp->next;
        while(temp){
           
            while(temp->val != 0){
                  
                sum += temp->val;
                temp = temp->next;
            }
            
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
            sum = 0;
            temp = temp->next;
        }
        // delete(ptr);
        // delete(temp);
        
        return pre->next;
    }
};