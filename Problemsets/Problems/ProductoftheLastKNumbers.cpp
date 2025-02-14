#include <vector>

using namespace std;

class ProductOfNumbers {
public:
    vector<int> products;
    int prod = 1;

    ProductOfNumbers() {}
    
    void add(int num) {
        if (num==0) {
            products.clear();
            prod = 1;
        } else {
            prod*=num;
            products.push_back(prod);
        }
    }
    
    int getProduct(int k) {
        if (products.size()<k) return 0;
        if (products.size()==k) return products.back();
        return products.back()/products[products.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
