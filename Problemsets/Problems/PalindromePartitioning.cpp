#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::vector<std::string>> partition(std::string s) {
        std::vector<std::vector<std::string>> ans;
        std::vector<std::string> path;
        backtrack(path, 0, s, ans);
        return ans;
    }

private:
    void backtrack(std::vector<std::string> &path, int start, std::string &s, std::vector<std::vector<std::string>> &ans) {
        auto isPalindrome = [](const std::string &s, int start, int end) {
            while (start < end) {
                if (s[start++] != s[end--]) return false;
            }
            return true;
        };
        
        if (start == s.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < s.size(); ++i) {
            if (isPalindrome(s, start, i)) {
                path.push_back(s.substr(start, i-start+1));
                backtrack(path, i+1, s, ans);
                path.pop_back();
            }
        }
    }
};

