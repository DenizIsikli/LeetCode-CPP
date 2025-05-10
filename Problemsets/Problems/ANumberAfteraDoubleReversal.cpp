using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num==0) return true;
        if (num%10==0) return false;
        string s = to_string(num);
        string reversedNum = string(s.rbegin(), s.rend());
        string doubleReversedNum = string(reversedNum.rbegin(), reversedNum.rend());
        return s == doubleReversedNum;
    }
};
