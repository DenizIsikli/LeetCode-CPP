#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>res;
        for(int i=0;i<s.size();i++){
            int cnt=0;
            int vert=startPos[0];
            int hori=startPos[1];
            for(int j=i;j<s.size();j++){
                char c=s[j];
                if(c=='R')hori++;
                else if(c=='L')hori--;
                else if(c=='U')vert--;
                else{vert++;}
                if(vert<0||vert>=n||hori<0||hori>=n)break;
                cnt++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};
