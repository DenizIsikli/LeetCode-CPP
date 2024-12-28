#include <vector>
#include <stack>
#include <map>

class solution {
public:
    std::vector<int> nextgreaterelement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::stack<int> s;
        std::map<int, int> m;
        std::vector<int> res(nums1.size(), -1);

        for (int num : nums2) {
            while (!s.empty() && s.top() < num) {
                m[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }

        for (int i = 0; i < nums1.size(); i++) {
            if (m.find(nums1[i]) != m.end()) {
                res[i] = m[nums1[i]];
            }
        }

        return res;
    }
};

//// O(n^3) solution:
//
// std::vector<int> res;
// for (int i = 0; i < nums1.size(); i++) {
//     for (int j = 0; j < nums2.size(); j++) {
//         if (nums1[i]==nums2[j]) {
//             if (j<nums2.size()-1) {
//                 for (int k = j+1; k < nums2.size(); k++) {
//                     if (nums2[k]>nums1[i]) {
//                         res.push_back(nums2[k]);
//                         break;
//                     }
//                     if (k==nums2.size()-1) { res.push_back(-1); }
//                 }
//             } else { res.push_back(-1); }
//         }
//     }
// }
// return res;
