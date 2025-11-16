#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int>toLearn;
        for(auto&f:friendships){
            int user1=f[0]-1;
            int user2=f[1]-1;
            bool fl=false;
            for(auto&l1:languages[user1]){
                for(auto&l2:languages[user2]){
                    if(l1==l2){
                        fl=true;
                        break;
                    }
                }
                if(fl)break;
            }
            if(!fl){
                toLearn.insert(user1);
                toLearn.insert(user2);
            }
        }
        int minUsersToTeach=languages.size();
        for(int lang=1;lang<=n;lang++){
            int cnt=0;
            for(auto&u:toLearn){
                bool fl=false;
                for(auto&l:languages[u]){
                    if(l==lang){
                        fl=true;
                        break;
                    }
                }
                if(!fl)cnt++;
            }
            minUsersToTeach=min(minUsersToTeach,cnt);
        }
        return minUsersToTeach;
    }
};
