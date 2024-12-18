struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode *temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        count/=2;
        temp = head;
        while (count > 0) {
            temp = temp->next;
            count--;
        }

        return temp;
    }
};
