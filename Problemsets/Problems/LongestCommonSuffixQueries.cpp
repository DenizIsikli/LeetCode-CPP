#include<bits/stdc++.h>
using namespace std;
struct TrieNode {
    TrieNode* next[26];
    int min_sz=INT_MAX; 
    int best_i=-1;
};
static constexpr int N=500003; 
static TrieNode pool[N];
static int ptr=0;   
struct Trie {
    TrieNode* root;
    TrieNode* newNode() {
        TrieNode* node=&pool[ptr++];
        memset(node->next, 0, sizeof(node->next));
        node->min_sz=INT_MAX;
        node->best_i=-1;
        return node;
    }
    Trie() {
        ptr=0;
        root=newNode();
    }
    void insert(const string& w, int idx) {
        int wz=w.size();
        TrieNode* curr=root;
        if (wz<curr->min_sz) {
            curr->min_sz=wz;
            curr->best_i=idx;
        }
        for (int i=wz-1; i>=0; i--) {
            int c = w[i]-'a';
            if (curr->next[c]==NULL) 
                curr->next[c]=newNode();
            curr=curr->next[c];
            if (wz<curr->min_sz) {
                curr->min_sz=wz;
                curr->best_i=idx;
            }
        }
    }
    int find(const string& q) {
        TrieNode* curr = root;
        int best=root->best_i;
        for (int i=q.size()-1; i>=0; i--) {
            int c=q[i]-'a';
            if (curr->next[c]==NULL) 
                break; 
            curr=curr->next[c];
            best=curr->best_i;
        }
        return best;
    }
};
class Solution {
public:
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        Trie trie;
        int i=0;
        for(auto&w:wordsContainer)trie.insert(w,i++);
        vector<int>ans(wordsQuery.size());
        i=0;
        for(auto&q:wordsQuery)ans[i++]=trie.find(q);
        return ans;
    }
};
