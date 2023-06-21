#include <string>

using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        string dayBinary = "";
        string monthBinary = "";
        string yearBinary = "";
        string binaryDate = "";
        while (day) {
            dayBinary+=to_string(day&1);
            day>>=1;
        }
        while (month) {
            monthBinary+=to_string(month&1);
            month>>=1;
        }
        while (year) {
            yearBinary+=to_string(year&1);
            year>>=1;
        }
        reverse(dayBinary.begin(), dayBinary.end());
        reverse(monthBinary.begin(), monthBinary.end());
        reverse(yearBinary.begin(), yearBinary.end());
        binaryDate=yearBinary+'-'+monthBinary+'-'+dayBinary;
        return binaryDate;
    }
};

