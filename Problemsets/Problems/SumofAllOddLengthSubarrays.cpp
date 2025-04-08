#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            vector<int> subarr;
            for (int j = i; j < arr.size(); j++) {
                subarr.push_back(arr[j]);
                if ((j-i+1)%2==1) {
                    sum += accumulate(subarr.begin(), subarr.end(), 0);
                } 
            }
        }
        return sum;
    }
};
