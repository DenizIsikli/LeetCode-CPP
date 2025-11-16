struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int pos=0;
        ListNode *curr=list1;
        while(pos<a-1){
            curr=curr->next;
            pos++;
        }
        ListNode *tmp=curr;
        while(pos<=b){
            tmp=tmp->next;
            pos++;
        }
        curr->next=list2;
        while(curr->next!=nullptr){
            curr=curr->next;
        }
        curr->next=tmp;
        return list1;
    }
};
