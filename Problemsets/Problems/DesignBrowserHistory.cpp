#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    string val;
    Node *prev;
    Node *next;
    Node(string v){
        val=v;
        prev=nullptr;
        next=nullptr;
    }
};
Node *cur=nullptr;
class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        cur=new Node(homepage);
    }
    
    void visit(string url) {
        Node *newNode=new Node(url);
        cur->next=newNode;
        newNode->prev=cur;
        cur=newNode;
    }
    
    string back(int steps) {
        while(steps--&&cur->prev){
            cur=cur->prev;
        }
        return cur->val;
    }
    
    string forward(int steps) {
        while(steps--&&cur->next){
            cur=cur->next;
        }
        return cur->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
