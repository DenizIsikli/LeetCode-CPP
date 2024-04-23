struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode *trav = head;
        int idx = 0;

        while (trav->next) {
            if (idx % 2 == 0) {
                int temp = trav->val;
                trav->val = trav->next->val;
                trav->next->val = temp;
            }
            trav = trav->next;
            ++idx;
        }
        return head;
    }
};
