#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    std::vector<ListNode*> splitListToParts(ListNode* head, int k) {
        std::vector<ListNode*> res;
        int len = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            len++;
            temp = temp->next;
        }
        int size = len/k;
        int rem = len%k;

        for (int i = 0; i < k; i++) {
            ListNode *newHead = new ListNode(0);
            ListNode *temp = newHead;
            for (int j = 0; j < size + (i < rem ? 1 : 0); j++) {
                temp->next = new ListNode(head->val);
                temp = temp->next;
                if (head != nullptr) head = head->next;
            }
            res.push_back(newHead->next);
        }
        return res;
    }
};
