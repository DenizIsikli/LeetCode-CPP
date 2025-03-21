#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        int n=recipes.size();
        unordered_map<string, int> fq;
        for (auto &supp : supplies) {
            fq[supp]=1;
        }

        vector<string> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                bool f=true;
                for(int k=0;k<ingredients[j].size();k++){
                    if(fq.find(ingredients[j][k]) == fq.end()) {
                        f=false;
                        break;
                    }
                }
                if(f && (fq.find(recipes[j]) == fq.end())){
                    res.push_back(recipes[j]);
                    fq[recipes[j]]=1;
                }
            }
        }

        return res;
    }
};
