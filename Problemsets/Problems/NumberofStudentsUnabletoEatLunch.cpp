#include <vector>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt[2]={0};
        for(int st:students)cnt[st]++;
        int rem=students.size();
        for(int sw:sandwiches){
            if(cnt[sw]==0)break;
            if(rem--==0)break;
            cnt[sw]--;
        }
        return rem;
    }
};
