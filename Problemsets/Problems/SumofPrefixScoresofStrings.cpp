#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

struct Node {
    std::unordered_map<char, std::pair<int, Node*>> fq;
    bool end = false;
};

class Trie {
private:
    Node *root;

public:
    Trie() {
        root = new Node();
    }

    void insert(std::string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->fq.find(s[i]) == cur->fq.end()) {
                cur->fq[s[i]].second = new Node();
            }
            cur->fq[s[i]].first++;
            cur = cur->fq[s[i]].second;

        }
        cur->end = true;
        return;
    }

    int check_prefix_count(std::string s) {
        Node *cur = root;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (cur->fq.find(s[i]) == cur->fq.end()) {
                break;
            }
            cnt += cur->fq[s[i]].first;
            cur = cur->fq[s[i]].second;
        }
        return cnt;
    }
};

class Solution {
public:
    std::vector<int> sumPrefixScores(std::vector<std::string>& words) {
        Trie trie;

        for (auto &word : words) {
            trie.insert(word);
        }
        std::vector<int> res;
        for (auto &word : words) {
            int tmp = trie.check_prefix_count(word);
            res.push_back(tmp);
        }
        return res;
    }
};
