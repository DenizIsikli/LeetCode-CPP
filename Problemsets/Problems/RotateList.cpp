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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>v;
        ListNode*temp=head;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        if(n==0)return head;
        rotate(v.begin(),v.begin()+n-k%n,v.end());
        ListNode*ans=new ListNode(v[0]);
        ListNode*temp1=ans;
        for(int i=1;i<n;i++){
            temp1->next=new ListNode(v[i]);
            temp1=temp1->next;
        }
        return ans;
    }
};
