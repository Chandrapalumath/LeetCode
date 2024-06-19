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
        ListNode * index=head;
        ListNode * c=head;
        if(head==nullptr){
            return nullptr;
        }
        for(int i=0;i<n;i++){
            index=index->next;
        }
        if(index==nullptr) return head->next;
        while(index->next!=nullptr){
            index=index->next;
            c=c->next;
        }
        c->next=c->next->next;
        return head;
    }
};