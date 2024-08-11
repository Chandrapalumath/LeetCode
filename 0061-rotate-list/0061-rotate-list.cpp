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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0) return head;
        int n=1;
        ListNode* curr=head;
        while(curr->next!=nullptr){
            n++; curr=curr->next;
        }
        k=k%n;
        int e=n-k;
        curr->next=head;
        while(e--) curr=curr->next;
        head=curr->next;
        curr->next=nullptr;
        return head;
    }
};