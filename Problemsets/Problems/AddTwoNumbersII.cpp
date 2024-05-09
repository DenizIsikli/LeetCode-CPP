#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto reverse = [](ListNode *head) {
            ListNode *prev = nullptr;
            ListNode *curr = head;
            while (curr) {
                ListNode *next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        };

        ListNode *r1 = reverse(l1);
        ListNode *r2 = reverse(l2);
        ListNode *head = new ListNode(-1);
        ListNode *curr = head;
        int carry = 0;
        while (r1!=nullptr || r2!=nullptr || carry) {
            int v1=0, v2=0;
            if (r1) v1=r1->val;
            if (r2) v2=r2->val;
            int sum = v1 + v2 + carry;
            carry = sum / 10;
            sum = sum % 10;
            curr->next = new ListNode(sum);
            curr = curr->next;
            if (r1) r1 = r1->next;
            if (r2) r2 = r2->next;
        }
        head = head->next;
        head = reverse(head);
        return head;
    }
};
