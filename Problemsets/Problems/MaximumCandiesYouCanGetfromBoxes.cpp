#include <vector>

using namespace std;

class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        bool foundOpenableBox = true;
        int totCandies = 0;
        while (!initialBoxes.empty() && foundOpenableBox) {
            foundOpenableBox = false;
            vector<int> newBoxes;
            for (int box : initialBoxes) {
                if (status[box]) {
                    foundOpenableBox = true;
                    newBoxes.insert(end(newBoxes), begin(containedBoxes[box]), end(containedBoxes[box]));
                    for (int keyId : keys[box]) status[keyId] = 1;
                    totCandies += candies[box];
                } else {
                    newBoxes.push_back(box);
                }
            }
            swap(initialBoxes, newBoxes);
        }
        return totCandies;
    }
};
