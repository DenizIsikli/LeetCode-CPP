#include <iostream>
#include <stack>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        std::stack<ListNode*> s;
        ListNode *curr = head;
        while (curr) {
            s.push(curr);
            curr=curr->next;
        }
        int carry = 0;
        while(!s.empty()) {
            ListNode *newNode = s.top();
            s.pop();
            int sum = newNode->val*2+carry;
            newNode->val = sum%10;
            carry = sum/10;
        }
        if (carry) {
            ListNode *newHead = new ListNode(carry);
            newHead->next = head;
            return newHead;
        }
        return head;
    }
};
