#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
bool visited[100];
vector<int> a[10];
vector<int>  p[20];
void dfs(int node){
    
    visited[node] = 1;
    for (int j =0; j<a[i].size();++j){
        if (visited[node]){
            continue;
        }
        dfs(a[i][j]);
    }
    
}
int main(){

    int N,M; cin>>N>>M;
    for (int i=0;i<M;++i){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i =0; i<N;i++){
        cout<<"Node : "<< i+1 << "    ";
        for (int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    memset(visited,0,sizeof(visited));
    dfs(1);
    cout<<visited[1];
    return 0;
}