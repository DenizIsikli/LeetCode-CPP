#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxValue=0;
        for (const string&str:strs) {
            int value=0;
            bool isNumeric=true;
            for(char c:str){
                if(!isdigit(c)){
                    isNumeric=false;
                    break;
                }
            }
            if(isNumeric){
                value=stoi(str);
            }else{
                value=str.size();
            }
            maxValue=max(maxValue,value);
        }
        return maxValue;
    }
};
