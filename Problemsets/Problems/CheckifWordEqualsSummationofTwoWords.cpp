#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int toNum(const string& w){
        int num=0,n=w.length();
        for(int i=0;i<n;i++)num=num*10+(w[i]-'a');
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return toNum(firstWord)+toNum(secondWord)==toNum(targetWord);
    }
};
