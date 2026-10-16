#include<bits/stdc++.h>
using namespace std;
struct Fenwick {
    int n;
    vector<long long> t;
    Fenwick(int n) : n(n), t(n + 1, 0) {}
    void add(int i, long long v) { for (; i <= n; i += i & -i) t[i] += v; }
    long long sum(int i) { long long s = 0; for (; i > 0; i -= i & -i) s += t[i]; return s; }
};
class NumArray {
    Fenwick fw;
    vector<int>a;
public:
    NumArray(vector<int>& nums) : fw(nums.size()), a(nums) {
        for(int i=0;i<nums.size();i++){
            fw.add(i+1,nums[i]);
        }
    }
    
    void update(int index, int val) {
        fw.add(index+1,val-a[index]);
        a[index]=val;
    }
    
    int sumRange(int left, int right) {
        return fw.sum(right+1)-fw.sum(left);
    }
};
