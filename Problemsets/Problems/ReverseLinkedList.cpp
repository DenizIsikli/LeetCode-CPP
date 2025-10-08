#include <vector>

using namespace std;

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
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=nullptr;
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        for(int i=v.size()-1;i>=0;i--){
            ListNode*newNode=new ListNode(v[i]);
            temp->next=newNode;
            temp=temp->next;
        }
        return dummy->next;
    }
};
