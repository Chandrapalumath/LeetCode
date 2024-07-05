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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* h=head;
        ListNode* temp=new ListNode(-1);
        ListNode* dummy=temp;
        while(h->next!=nullptr){
            temp->next=new ListNode(h->val);
            temp=temp->next;
            int a=__gcd(h->val,h->next->val);
            temp->next=new ListNode(a);
            temp=temp->next;
            h=h->next;
        }
        temp->next=new ListNode(h->val);
        temp=temp->next;
        return dummy->next;
    }
};