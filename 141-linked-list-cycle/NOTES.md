if(!head) return false;
// making two pointers fast and slow and assigning them to head
ListNode* fast = head;
ListNode* slow = head;
// till fast and fast->next not reaches NULL
// we will increment fast by 2 step and slow by 1 step
while(fast && fast->next){
fast = fast->next->next;
slow = slow->next;
// At the point if fast and slow are at same address
// this means linked list has a cycle in it.
if(fast == slow) return true;
}
// if traversal reaches to NULL this means no cycle.
return false;