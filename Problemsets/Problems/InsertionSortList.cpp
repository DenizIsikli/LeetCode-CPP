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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        auto insertionsort=[&](vector<int>&v){
            int n=v.size();
            for(int i=1;i<n;i++){
                int key=v[i];
                int j=i-1;
                while(j>=0 && v[j]>key){
                    v[j+1]=v[j];
                    j--;
                }
                v[j+1]=key;
            }
        };
        insertionsort(v);
        ListNode*res=new ListNode(0);
        ListNode*tmp=res;
        for(int i=0;i<v.size();i++){
            tmp->next=new ListNode(v[i]);
            tmp=tmp->next;
        }
        return res->next;
    }
};
