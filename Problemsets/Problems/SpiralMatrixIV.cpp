#include <vector>

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
    std::vector<std::vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        std::vector<std::vector<int>> res(m, std::vector<int>(n, -1));
        int Firstrow = 0;
        int Lastrow = m-1;
        int Firstcol = 0;
        int Lastcol = n-1;

        while (head) {
            for (int i = Firstcol; i <= Lastcol && head; i++) {
                res[Firstrow][i] = head->val;
                head = head->next;
            }
            Firstrow++;

            for (int i = Firstrow; i <= Lastrow && head; i++) {
                res[i][Lastcol] = head->val;
                head = head->next;
            }
            Lastcol--;

            for (int i = Lastcol; i >= Firstcol && head; i--) {
                res[Lastrow][i] = head->val;
                head = head->next;
            }
            Lastrow--;

            for (int i = Lastrow; i >= Firstrow && head; i--) {
                res[i][Firstcol] = head->val;
                head = head->next;
            }
            Firstcol++;
        }
        return res;
    }
};
