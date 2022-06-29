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
        
        ListNode* temp = head;
        temp = temp->next;
        
        vector<int> storeSum;
        int sum = 0;
        while(temp){
            
            sum += temp->val;
            
            if(temp->val == 0){
                
                storeSum.push_back(sum);
                sum = 0;
            }
            
            temp = temp->next;
        }
        
        temp = head;
        
        int n = storeSum.size();
        for(int i=0; i<n; i++){
            
            temp->val = storeSum[i];
            temp = temp->next;
        }
        temp->next = NULL;
        
        ListNode* ptr = head;
        while(ptr->next != temp){
            
            ptr = ptr->next;
        }
        ptr->next = NULL;
        
        return head;
    }
};