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
    ListNode* modifiedList(std::vector<int>& nums, ListNode* head) {
        unordered_set<int> hasN(nums.begin(), nums.end());
        ListNode dummy(0, head);
        ListNode *prev = &dummy, *temp = NULL;
        for (ListNode *curr = head; curr; curr = curr->next) {
            if (hasN.count(curr->val)) {
                prev->next = curr->next;
                temp = curr;
            } else {
                prev = prev->next;
                temp = NULL;
            }
        }
        return dummy.next;
    }
};
