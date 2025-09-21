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
    int pairSum(ListNode* head) {
        stack<int>st;
        int ans=0;
        int n=0;
        ListNode *tmp=head;
        while(tmp){n++;tmp=tmp->next;}
        tmp=head;
        n/=2;
        while(n--){st.push(tmp->val);tmp=tmp->next;}
        while(tmp){
            int x=st.top()+tmp->val;
            ans=max(ans,x);
            st.pop();
            tmp=tmp->next;
        }
        return ans;
    }
};
