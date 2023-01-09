#include<iostream>
#include<algorithm>
using namespace std;
#include <vector>


//given no source perform dfs for any disconnected graph.

void DFSrec(vector<int>adj[],int s,bool visited[]){

    visited[s]=true;
    cout<<s<<" ";
    for(auto x:adj[s]){
        if(visited[x]==false)DFSrec(adj,x,visited);
    }

}
int DFS(vector<int>adj[],int v){
    bool visited[v+1];
    int count=0;
    for(int i=0;i<=v;i++)visited[i]=false;
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            DFSrec(adj,i,visited);
            count++;
        }
    }
    return count;
}

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{   
    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,0,2);
    addEdge(adj,3,4);

    cout<<DFS(adj,v);
    
    return 0;
}