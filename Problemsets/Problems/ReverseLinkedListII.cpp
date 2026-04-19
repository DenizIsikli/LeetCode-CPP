#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*prev=nullptr;
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        reverse(v.begin()+left-1,v.begin()+right);
        for(int i=0;i<v.size();i++){
            ListNode*newNode=new ListNode(v[i]);
            temp->next=newNode;
            temp=temp->next;
        }
        return dummy->next;
    }
};
