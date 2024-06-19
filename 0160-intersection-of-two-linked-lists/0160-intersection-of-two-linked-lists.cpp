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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * a=headA;
        ListNode * b=headB;
        int l1=0,l2=0;
        while(a){
            l1++;
            a=a->next;
        }
        while(b){
            l2++;
            b=b->next;
        }
        if(l1>l2){
            for(int i=0;i<l1-l2;i++){
                headA=headA->next;
            }
        }else{
            for(int i=0;i<l2-l1;i++){
                headB=headB->next;
            }
        }
        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};