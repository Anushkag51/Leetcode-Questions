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
    void reorderList(ListNode* head) {
        if(!head or !head->next)
            return ;
        ListNode*temp=head;
        vector<ListNode*>v;
        while(temp!=NULL)
        {
            v.push_back(temp);
            temp=temp->next;
        }
        int i=0,j=v.size()-1;
        while(i<j)
        {
            v[i]->next=v[j];
            v[j]->next=v[i+1];
            i++;
            j--;
        }
        v[i]->next=NULL;

    }
};