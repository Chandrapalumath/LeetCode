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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int i=1;
        vector<int>index;
        ListNode* temp=head;
        int prev=temp->val;
        temp=temp->next;
        while(temp->next!=nullptr){
            if(temp->val>prev && temp->val>temp->next->val) index.push_back(i);
            if(temp->val<prev && temp->val<temp->next->val) index.push_back(i);
            i++;
            prev=temp->val;
            temp=temp->next;
        }
        if(index.size()<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=0;i<index.size()-1;i++){
            mini=min(mini,abs(index[i+1]-index[i]));
            
        }
        int maxi=index[index.size()-1]-index[0];
        return {mini,maxi};
    }
};