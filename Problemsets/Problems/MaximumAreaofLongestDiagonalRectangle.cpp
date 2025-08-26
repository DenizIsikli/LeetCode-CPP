#include <math.h>
#include <vector>

using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=0,diag=0;
        for(auto&dim:dimensions){
            int currDiag=dim[0]*dim[0]+dim[1]*dim[1];
            if(currDiag>diag||(currDiag==diag&&(dim[0]*dim[1]>area))){
                diag=currDiag;
                area=dim[0]*dim[1];
            }
        }
        return area;
    }
};
