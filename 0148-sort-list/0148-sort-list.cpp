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
    int i=0;
    ListNode* sortList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode *h=head;
        while(h!=nullptr){
            s.push_back(h->val);
            h=h->next;
        }
        h=head;
        sort(s.begin(),s.end());
        while(h!=nullptr){
            h->val=s[i];
            h=h->next;
            i++;
        }
        return head;
    }
};