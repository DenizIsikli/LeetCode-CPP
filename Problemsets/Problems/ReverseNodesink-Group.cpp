#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if (head == NULL || k == 1) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* begin = dummy;
        int i = 0;
        
        while (head != NULL) {
            i++;
            if (i % k == 0) {
                begin = reverse(begin, head->next);
                head = begin->next;
            } else {
                head = head->next;
            }
        }
        
        return dummy->next;
    }

    ListNode* reverse(ListNode* begin, ListNode* end) {
        ListNode* prev = begin;
        ListNode* curr = begin->next;
        ListNode* first = curr;
        ListNode* next;
        
        while (curr != end) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        begin->next = prev;
        first->next = curr;
        
        return first;
    }
};
