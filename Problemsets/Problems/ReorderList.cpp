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
    void reorderList(ListNode* head) {
        vector<ListNode*>v;
        ListNode*tmp=head;
        while(tmp){
            v.push_back(tmp);
            tmp=tmp->next;
        }
        int i=0,j=v.size()-1;
        while(i<j){
            v[i]->next=v[j];
            i++;
            if(i==j)break;
            v[j]->next=v[i];
            j--;
        }
        v[i]->next=nullptr;
    }
};
