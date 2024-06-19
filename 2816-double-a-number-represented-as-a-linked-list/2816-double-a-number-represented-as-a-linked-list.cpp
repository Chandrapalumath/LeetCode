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
    vector<int>s;
    ListNode* doubleIt(ListNode* head) {
        if(head->val>=5){
            head=new ListNode(0,head);
        }
        ListNode * c =head;
        while(c){
            c->val*=2;
            c->val%=10;
            if(c->next && c->next->val>=5){
                c->val +=1;
            }
            c=c->next;
        }
        return head;
    }
};