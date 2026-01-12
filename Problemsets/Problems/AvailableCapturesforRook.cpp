#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int cnt=0;
        int r,c;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        for(int i=r-1;i>=0;i--){
            if(board[i][c]=='B') break;
            if(board[i][c]=='p'){
                cnt++;
                break;
            }
        }
        for(int i=r+1;i<board.size();i++){
            if(board[i][c]=='B') break;
            if(board[i][c]=='p'){
                cnt++;
                break;
            }
        }
        for(int j=c-1;j>=0;j--){
            if(board[r][j]=='B') break;
            if(board[r][j]=='p'){
                cnt++;
                break;
            }
        }
        for(int j=c+1;j<board[0].size();j++){
            if(board[r][j]=='B') break;
            if(board[r][j]=='p'){
                cnt++;
                break;
            }
        }
        return cnt;
    }
};
