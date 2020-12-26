#include <bits/stdc++.h>
using namespace std;
bool visited[100];
vector<int> a[10];
void bfs(int node){
    queue <int> q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int k = q.front();
        q.pop();

        for(int i = 0 ; i<a[k].size() ; ++i){
            if (visited[a[k][i]]==0){
                q.push(a[k][i]);
                visited[a[k][i]]=1;

            }
        }
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
    bfs(0);
    cout<<visited[1];
    return 0;
}