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
        vector<int>ans;
        ListNode *result=NULL;
        for(int i=0;i<lists.size();i++)
        {
            ListNode *temp=lists[i];
            while(temp!=NULL)
            {
                ans.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            ListNode *temp=new ListNode;
            temp->val=ans[i];
            temp->next=NULL;
            if(result==NULL)
                result=temp;
            else
            {
                ListNode *ptr=result;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=temp;
            }

        }
        return result;
    }
};