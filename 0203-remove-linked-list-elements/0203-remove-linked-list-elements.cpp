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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return head;
        }
        ListNode *prev=new ListNode();
        ListNode *d=new ListNode();
        d->next=head;
        ListNode *curr=d;
        if(head->next==nullptr){
            if(head->val==val){
                head=nullptr;
                return head;
            }
        }
        while(curr->next!=nullptr){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }else{
                curr=curr->next;
            }
        }
        return d->next;
    }
};