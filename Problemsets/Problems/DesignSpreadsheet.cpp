#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Spreadsheet {
public:
    unordered_map<string,int> data;

    Spreadsheet(int rows) {}
    void setCell(string cell, int value) {
        data[cell]=value;
    }
    void resetCell(string cell) {
        data[cell]=0;
    }
    int getValue(string formula) {
        int sum=0;
        int n=formula.size();
        int i=0;
        if(formula[0]=='=')i=1;
        while(i<n){
            if(formula[i]=='+'){i++;continue;}
            string tok="";
            while(i<n&&formula[i]!='+'){tok+=formula[i++];}
            if(tok.empty())continue;
            if(isalpha(tok[0]))sum+=data[tok];
            else sum+=stoi(tok);
        }
        return sum;
    }
};

/**

 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
