#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int>adj[],int v,int s){
    int dist[v];
    for(int i=0;i<v;i++)dist[v]=INT_MAX;
    bool visited[v+1];
    for(int i=0;i<=v;i++)visited[i]=false;
    dist[s]=0;
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        cout<<u<<" ";
        q.pop();
        for(auto x:adj[u]){
            if(visited[x]==false){
                dist[x]=dist[u]+1;
                visited[x]=true;
                q.push(x);
            }
        }
    }
     cout<<"\n";
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }

    return;
}


void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
    return;
}

int main(){
    int v=4;
    vector<int>G[v];
    addEdge(G,0,1);
    addEdge(G,1,2);
    addEdge(G,2,3);
    addEdge(G,0,2);
    addEdge(G,1,3);

    BFS(G,v,0);


    return 0;
}
