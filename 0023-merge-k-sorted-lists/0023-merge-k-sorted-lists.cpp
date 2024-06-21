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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>cp;
        int k=lists.size();
        if(k==0){
            return nullptr;
        }
        for(int  i=0;i<k;i++){
            while(lists[i]!=nullptr){
                cp.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ListNode *newlist=new ListNode(-1);
        ListNode *d=newlist;
        while(!cp.empty()){
            newlist->next=new ListNode(cp.top());
            cp.pop();
            newlist=newlist->next;
        }
        return d->next;
    }
};