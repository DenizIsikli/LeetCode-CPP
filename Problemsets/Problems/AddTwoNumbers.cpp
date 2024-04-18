struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void traverse(ListNode *l1, ListNode *l2, ListNode *result, int carry) {
        if (l1 == nullptr && l2 == nullptr) {
            if (carry > 0) {
                result->next = new ListNode(carry);
            }
            return;
        }

        int temp1 = 0;
        int temp2 = 0;
        if (l1 != nullptr) {
            temp1 = l1->val;
        }
        if (l2 != nullptr) {
            temp2 = l2->val;
        }

        carry += temp1 + temp2;
        result->next = new ListNode(carry % 10);
        carry /= 10;

        traverse(l1 == nullptr ? nullptr : l1->next, l2 == nullptr ? nullptr : l2->next, result->next, carry);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode();
        traverse(l1, l2, result, 0);
        return result->next;
    }
};
