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
    stack<int>s;
    bool isPalindrome(ListNode* head) {
        ListNode* n=head;
        while(n!=nullptr){
            s.push(n->val);
            n=n->next;
        }
        ListNode* p=head;
        while(p!=nullptr){
            if(s.top()!=p->val){
                return false;
            }
            s.pop();
            p=p->next;
        }
        return true;
    }
};