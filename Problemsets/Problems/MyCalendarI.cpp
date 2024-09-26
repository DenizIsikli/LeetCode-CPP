#include <vector>
#include <algorithm>

class MyCalendar {
public:
    std::vector<std::pair<int, int>> bookings;

    MyCalendar() {

    }
    
    bool book(int start, int end) {
        for (auto booking : bookings) {
            if (start < booking.second && end > booking.first) {
                return false;
            }
        }
        bookings.push_back(std::make_pair(start, end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
