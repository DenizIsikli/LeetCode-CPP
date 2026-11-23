#include<bits/stdc++.h>
using namespace std;
class ProductOfNumbers {
public:
    vector<int>v;
    int prod=1;
    ProductOfNumbers() {}
    void add(int num) {
        if(num==0){v.clear();prod=1;}
        else{prod*=num;v.push_back(prod);}
    }
    int getProduct(int k) {
        if(v.size()<k)return 0;
        if(k==v.size())return v.back();
        return v.back()/v[v.size()-1-k];
    }
};
