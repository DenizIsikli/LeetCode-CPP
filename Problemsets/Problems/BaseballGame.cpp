#include <string>
#include <vector>
#include <numeric>

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> v;
        for (const auto &opt : operations) {
            if (opt=="C") v.pop_back();
            else if (opt=="D") v.push_back(v.back()*2);
            else if (opt=="+") v.push_back(v[v.size()-1]+v[v.size()-2]);
            else v.push_back(std::stoi(opt));
        }
        return std::accumulate(v.begin(), v.end(), 0);
    }
};
