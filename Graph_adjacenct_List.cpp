#include<iostream>
#include<algorithm>
using namespace std;
#include <vector>

void addEdge(vector<int>adj[],int u,int v){
    
    adj[u].push_back(v);
    adj[v].push_back(u);

    return;
}

void displayFun(vector<int> adj[],int x){

    for(int i=0;i<x;i++){
        for(auto j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

int main()
{   vector<int>g[4];
    addEdge(g,0,1);
    addEdge(g,0,2);
    addEdge(g,1,2);
    addEdge(g,1,3);
    displayFun(g,4);

    return 0;
}