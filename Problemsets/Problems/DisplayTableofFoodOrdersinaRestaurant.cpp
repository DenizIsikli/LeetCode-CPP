#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        pair<vector<int>,vector<string>>p;
        map<int,map<string,int>>tableFoodCount;
        for(auto&order:orders){
            p.first.push_back(stoi(order[1]));
            p.second.push_back(order[2]);
            tableFoodCount[stoi(order[1])][order[2]]++;
        }
        sort(p.first.begin(),p.first.end());
        sort(p.second.begin(),p.second.end());
        p.first.erase(unique(p.first.begin(),p.first.end()),p.first.end());
        p.second.erase(unique(p.second.begin(),p.second.end()),p.second.end());
        int szFI=p.second.size();
        int szTN=p.first.size();
        vector<vector<string>>ans(szTN+1,vector<string>(szFI+1,"0"));
        ans[0][0]="Table";
        for(int i=1;i<=szFI;i++)ans[0][i]=p.second[i-1];
        for(int i=1;i<=szTN;i++)ans[i][0]=to_string(p.first[i-1]);
        for(int i=1;i<=szTN;i++){
            for(int j=1;j<=szFI;j++){
                ans[i][j]=to_string(tableFoodCount[p.first[i-1]][p.second[j-1]]);
            }
        }
        return ans;
    }
};
