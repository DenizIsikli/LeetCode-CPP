#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n=encodedText.size(),col=n/rows,step=col+1;
        string ans="";
        for(int i=0;i<col;i++){
            for(int j=i;j<n;j+=step){
                ans+=encodedText[j];
            }
        }
        int end=ans.size()-1;
        while(end>0&&ans[end]==' '){end--;}
        ans.resize(end+1);
        return ans;
    }
};
class OldSolution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int sz=encodedText.size();
        vector<vector<char>>v(rows,vector<char>(sz/rows));
        int r=0,c=0;
        for(int i=0;i<sz;i++){
            v[r][c]=encodedText[i];
            c++;
            if(c==sz/rows){
                c=0;
                r++;
            }
        }
        string ans="";
        for(int i=0;i<sz/rows;i++){
            int x=0,y=i;
            while(x<rows&&y<sz/rows){
                ans+=v[x][y];
                x++;
                y++;
            }
        }
        ans=ans.substr(0,ans.find_last_not_of(' ')+1);
        return ans;
    }
};
