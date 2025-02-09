#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        for (int i = 0; i < month - 1; i++) {
            day += days[i];
        }
        if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            day++;
        }
        return day;
    }
};
