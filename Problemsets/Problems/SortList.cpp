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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());
        ListNode*res=new ListNode(0);
        ListNode*tmp=res;
        for(int i=0;i<v.size();i++){
            ListNode*newNode=new ListNode(v[i]);
            tmp->next=newNode;
            tmp=tmp->next;
        }
        return res->next;
    }
};
