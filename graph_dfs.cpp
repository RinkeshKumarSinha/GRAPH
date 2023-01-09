#include<iostream>
#include<algorithm>
using namespace std;
#include <vector>

//given source perform dfs for an undirected un-disconnected graph

void DFSrec(vector <int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(auto x:adj[s]){
        if(visited[x]==false){
            DFSrec(adj,x,visited);
        }
    }

}
void DFS(vector<int> adj[],int v,int s){
    bool visited[v+1];
    for(int i=0;i<=v;i++){
          visited[i]=false;
    }
    DFSrec(adj,s,visited);


}

void addEdge(vector<int>adj[],int u,int v){

    adj[u].push_back(v);
    adj[v].push_back(u);

    return;
}
int main()
{   
    int v=5;
    vector<int>G[v];
    addEdge(G,0,1);
    addEdge(G,0,2);
    addEdge(G,2,3);
    addEdge(G,1,3);
    addEdge(G,1,4);
    addEdge(G,3,4);

    DFS(G,v,0);

    return 0;
}