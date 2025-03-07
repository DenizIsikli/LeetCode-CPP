#include <vector>

using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int res = 0;
        for (auto &x : hours) {
            if (x>=target) res++;
        }
        return res; 
    }
};
