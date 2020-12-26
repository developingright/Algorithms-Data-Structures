#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
 
vector<long long int>a,dp;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;cin>>n>>k;
    ll m = (ll)10e9;
    a.resize(n);
    dp.resize(n,1e9);
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[0]=0;
    for (int i=1;i<=k;i++){
        for (int j=0;j<i;j++){
            m= min(m,abs(a[i]-a[j])+dp[j]);
        }
        dp[i]=m;
        m= 10e9;
    }
    m= 10e9;
    for (int i = k+1; i < n; i++){
        for (int j = i-k; j < i; j++){  // [i-k,.....,i-1] -> i
            m= min(m, abs(a[i]-a[j]) + dp[j]);
        }
        dp [i]=m;
        m=10e9;
    }
    cout<<dp[n-1]<<endl;
    return 0;
}