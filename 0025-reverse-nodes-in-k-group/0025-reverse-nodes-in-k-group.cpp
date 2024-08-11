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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        if(head==nullptr || head->next==nullptr) return head;
        ListNode * ans=new ListNode(0);
        ListNode *dummy=ans;
        while(head!=nullptr){
            vector<int>s;
            int i=0;
            while(i<k && head!=nullptr){
                s.push_back(head->val);
                head=head->next;
                i++;
            }
            if(s.size()==k){reverse(s.begin(),s.end());}
            i=0;
            while(i<s.size() ){
                ans->next=new ListNode(s[i]);
                ans=ans->next;
                i++;
            }
        }
        return dummy->next;
    }
};