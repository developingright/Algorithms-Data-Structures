#include<bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> a;
vector<vector<long long int>> dp;
int main(){
    int N,W;
    cin>>N>>W;
    a.resize(N,vector<long long int>(2));
    dp.resize(N+1,vector<long long int>(W+1,0));
    for(int i = 0 ; i < N ; ++i){
        for (int j = 0; j<2 ; ++j){
            cin>>a[i][j];
        }
    }
 
    for(int i = 1; i<N+1 ; ++i ){
        for (int j = 1 ; j<W+1 ; ++j ){
            if (a[i-1][0]<=j){  
                dp[i][j] = max({dp[i-1][j-a[i-1][0]]+a[i-1][1],dp[i-1][j],dp[i][j-1]});
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[N][W]<<'\n';
    return 0;
}