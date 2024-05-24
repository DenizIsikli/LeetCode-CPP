class Solution {
public:
    long long countSubstrings(string s, char c) {
        int single_char = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                single_char++;
            }
        }
        
        long long ans = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                ans += single_char;
                single_char--;
            }
        }

        return ans;
    }
};
