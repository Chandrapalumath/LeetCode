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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode *cp=new ListNode(-1);
        ListNode *d=cp;
        head=head->next;
        while(head){
            if(head->val==0){
                cp->next=new ListNode(sum);
                cp=cp->next;
                if(head->next==nullptr){
                    break;
                }
                sum=0;
                head=head->next;
            }else{
                sum+=head->val;
                head=head->next;
            }
        }
        return d->next;
    }
};