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
    
    void reverseIt(vector<int> &arr , int left , int right){
        while(left < right){
            swap(arr[left] , arr[right]);
            left++;
            right--;
        }
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* itr = head;
        vector<int> arr;
        
        while(itr){
            
            arr.push_back(itr->val);
            itr = itr->next;
        }
        
        reverseIt(arr, left-1, right-1);
        
        head = new ListNode(-1000);
        itr = head;
        for(auto i: arr){
            
            itr->next = new ListNode(i);
            itr = itr->next;
        }
        
        return head->next;
    }
};