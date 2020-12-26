#include <bits/stdc++.h>
using namespace std;
 
vector<long long int> a,dp;
 int main(){
    long long int N ; cin>>N;
    a.resize(N);
    dp.resize(N,1e9);
    // memset(dp,0,sizeof(dp));
    for (int i =0;i<N;++i){ 
        cin>>a[i];
    }
    dp[0]= 0;
    dp[1] =abs(a[1]-a[0]);
    for (int i =2; i<N;++i){
        dp[i]= min(abs(a[i]-a[i-1])+dp[i-1],abs(a[i]-a[i-2])+dp[i-2]);
    }
    // for (int j=0;j<N;++j){
    //     cout<<dp[j]<<" ";
    // }
    cout<<dp[N-1]<<endl;
    return 0;
 }