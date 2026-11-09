#include<bits/stdc++.h>
using namespace std;
class TrieNode {
public:
    unordered_map<char,TrieNode*>children;
    bool is_end=false;
};
class WordDictionary {
public:
    TrieNode *root=new TrieNode;
    WordDictionary() {}
    void addWord(string word) {
        TrieNode* cur=root;
        for(auto&c:word){
            if(cur->children.find(c)==cur->children.end()){
                cur->children[c]=new TrieNode();
            }
            cur=cur->children[c];
        }
        cur->is_end=true;
    }
    bool search(string word) {
        return dfs(word,0,root);
    }
    bool dfs(string word,int j,TrieNode*root){
        TrieNode* cur=root;
        for(int i=j;i<word.size();i++){
            char c=word[i];
            if(c=='.'){
                for(auto&[ch,childNode]:cur->children){
                    if(childNode!=nullptr&&dfs(word,i+1,childNode)){
                        return true;
                    }
                }
                return false;
            }else{
                if(cur->children.find(c)==cur->children.end()){
                    return false;
                }
                cur=cur->children[c];
            }
        }
        return cur->is_end;
    }
};
