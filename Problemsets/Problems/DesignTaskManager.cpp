#include <queue>
#include <vector>
#include <unordered_map>

using namespace std;

class TaskManager {
public:
    priority_queue<pair<int,int>>pq;
    unordered_map<int,int>tskPrio;
    unordered_map<int,int>tskOwner;
    TaskManager(vector<vector<int>>& tasks) {
        for(const auto&t:tasks){
            add(t[0],t[1],t[2]);
        }
    }
    void add(int userId, int taskId, int priority) {
        pq.push({priority,taskId});
        tskPrio[taskId]=priority;
        tskOwner[taskId]=userId;
    }
    void edit(int taskId, int newPriority) {
        pq.push({newPriority,taskId});
        tskPrio[taskId]=newPriority;
    }
    void rmv(int taskId) {
        tskPrio[taskId]=-1;
    }
    int execTop() {
        while(!pq.empty()){
            const auto tsk=pq.top();
            pq.pop();
            if(tsk.first==tskPrio[tsk.second]){
                tskPrio[tsk.second]=-1;
                return tskOwner[tsk.second];
            }
        }
        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);

 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */
