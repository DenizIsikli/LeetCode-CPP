#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num==0) return "Zero";

        string bigString[] = {"Thousand", "Million", "Billion"};
        string res = numberToWordsHelper(num % 1000);
        num /= 1000;

        for (int i = 0; i < 3; ++i) {
            if (num > 0 && num % 1000 > 0) {
                res = numberToWordsHelper(num % 1000) + bigString[i] + " " + res;
            }
            num /= 1000;
        }
        
        return res.empty() ? res : res.substr(0, res.size()-1);
    }

    string numberToWordsHelper(int num) {
        vector<string> digitString = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> teenString = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen","Eighteen", "Nineteen"};
        vector<string> tenString = {"","","Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        string res = "";

        if (num>99) {
            res += digitString[num/100] + " Hundred ";
        }
        num %= 100;
        if (num<20 && num>9) {
            res += teenString[num%10] + " ";
        } else {
            if (num>=20) {
                res += tenString[num/10] + " ";
            }
            num%=10;
            if (num>0) {
                res += digitString[num] + " ";
            }
        }
        return res;
    }
};
