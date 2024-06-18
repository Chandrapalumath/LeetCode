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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* prev=new ListNode(head->val);
        ListNode* d=prev;
        ListNode* di=head->next;
        while(di){
            if(di->val!=prev->val){
                ListNode* temp=new ListNode(di->val);
                prev->next=temp;
                prev=prev->next;
            }
            di=di->next;
        }
        return d;
    }
};