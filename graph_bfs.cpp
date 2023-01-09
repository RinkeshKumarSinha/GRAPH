#include<iostream>
#include<algorithm>
using namespace std;
#include <vector>
#include <queue>
//given the source perform the bfs traversal of an undirected graph (is not disconnected)



void BFS(vector<int>adj[],int v,int s){
    
    bool visited[v+1];
    for(int i=0;i<=v;i++){
        visited[i]=false;
    }
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
         int u=q.front();
         q.pop();
         cout<<u<<" ";
         for(auto x:adj[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
         }

    }
    

    return;
}


void addEdge(vector<int>adj[],int u,int v){
    
    adj[u].push_back(v);
    adj[v].push_back(u);

    return;
}

void displayFun(vector<int>adj[],int v){
     
    for(int i=0;i<v;i++){
        for(auto x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return;
}
int main()
{   int v;
    v=5;
    vector <int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);

    displayFun(adj,v);
    BFS(adj,v,0);

    return 0;
}