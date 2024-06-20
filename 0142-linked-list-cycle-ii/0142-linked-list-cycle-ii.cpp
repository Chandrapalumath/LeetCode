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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *lp=head;
        ListNode *slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next;
            slow =slow->next;
            fast=fast->next;
            if(slow==fast){
                while(lp!=slow){
                    lp=lp->next;
                    slow=slow->next;
                }
                return slow;
            } 
        }
        return nullptr;
    }
};