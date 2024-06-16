#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> lexicalOrder(int n) {
        std::vector<std::string> numbers;
        for (int i = 1; i <= n; i++) numbers.push_back(std::to_string(i));
        std::sort(numbers.begin(), numbers.end());
        std::vector<int> result;
        for (const std::string& number : numbers) result.push_back(std::stoi(number));
        return result;
    }
};
