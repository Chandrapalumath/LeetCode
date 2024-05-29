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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* cnode=head;
        ListNode* pnode=head;
        ListNode* nnode=head;
        nnode=cnode->next;
        cnode->next=nullptr;
        while(nnode!=nullptr){
            pnode=cnode;
            cnode=nnode;
            nnode=nnode->next;
            cnode->next=pnode;
        }
        head=cnode;
        return head;
    }
};