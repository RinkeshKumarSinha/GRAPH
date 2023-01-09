#include<iostream>
#include<algorithm>
using namespace std;
#include <vector>
#include <queue>
//given source unknown perform the bfs traversal of an undirected graph (disconnected)



void BFS(vector<int>adj[],int s,bool visited[]){
    
  
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

void BFSDis(vector <int> adj[],int v){
      bool visited[v+1];
    for(int i=0;i<=v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            BFS(adj,i,visited);
        }
    }
}

void addEdge(vector<int>adj[],int u,int v){
    
    adj[u].push_back(v);
    adj[v].push_back(u);

    return;
}


int main()
{   int v;
    v=7;
    vector <int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,1,3);
    addEdge(adj,4,5);
    addEdge(adj,4,6);
    addEdge(adj,5,6);


    
    BFSDis(adj,v);

    return 0;
}