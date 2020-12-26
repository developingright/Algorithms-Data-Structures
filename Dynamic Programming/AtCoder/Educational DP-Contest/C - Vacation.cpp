#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>> a;
vector<vector<int>> dp;
 int main(){
    long long int N ; cin>>N;
    a.resize(N,vector<int>(3));
    dp.resize(N,vector<int>(3,0));
    for (int i =0; i<N;++i){
        for (int j=0;j<3;++j){
            cin>>a[i][j];
        }
    }
 
    dp[0][0]=a[0][0];
    dp[0][1]=a[0][1];
    dp[0][2]=a[0][2];
    for (int i=1;i<N;++i){
        for (int j=0;j<3;j++){
            if (j==0){
               dp[i][j] = a[i][j]+max(dp[i-1][1],dp[i-1][2]); 
            }
            if (j==1){
               dp[i][j] =a[i][j]+ max(dp[i-1][0],dp[i-1][2]); 
            }
            if (j==2){
               dp[i][j] =a[i][j]+ max(dp[i-1][0],dp[i-1][1]); 
            }
        }
    }
    cout<<max({dp[N-1][0], dp[N-1][1], dp[N-1][2]});
    
    return 0;
 }