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
    bool isPalindrome(ListNode* head) {
        std::vector<int> v;
        while (head != nullptr) {
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size();
        for (int i = 0; i < n / 2; i++) {
            if (v[i] != v[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
