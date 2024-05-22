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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* head=l3;
        int c=0;
        int sum,p;
        while(l1!=nullptr && l2!=nullptr){
            sum=l1->val+l2->val+c; 
            c=sum/10;
            p=sum%10;
            l3->next=new ListNode(p);
            l1=l1->next;
            l2=l2->next;
            l3=l3->next;
            
        }
        while(l1!=nullptr){
            sum=l1->val+c;  
            p=sum%10;
            l3->next=new ListNode(p);
            c=sum/10;
            l1=l1->next;
            l3=l3->next;
        }
        while(l2!=nullptr){
            sum=l2->val+c;  
            p=sum%10;
            l3->next=new ListNode(p);
            c=sum/10;
            l2=l2->next;
            l3=l3->next;
        }
        if(c!=0){
            l3->next=new ListNode(c);
        }
        return head->next;
    }
};