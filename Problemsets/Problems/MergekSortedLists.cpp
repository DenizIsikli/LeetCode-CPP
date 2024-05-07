/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        std::vector<int> values;
        for (auto list : lists) {
            while (list) {
                values.push_back(list->val);
                list = list->next;
            }
        }
        std::sort(values.begin(), values.end());
        if (values.size() == 0) return nullptr;
        ListNode *head = new ListNode(values[0]);
        ListNode *curr = head;
        for (auto val : values) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }
        return head->next;
    }
};
