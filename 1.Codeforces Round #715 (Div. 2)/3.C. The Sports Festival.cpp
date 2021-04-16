#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void fast (void) __attribute__ ((constructor));
void fast (void) 
{ 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int a[2010],dp[2010][2010];
bool check[2010][2010];

int calc(int p,int q){
    if(check[p][q]) return dp[p][q];
    check[p][q]=true;
    if(p==q) return 0;
    return dp[p][q]=min(calc(p,q-1),calc(p+1,q))+a[q]-a[p];
}
 
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    sort(a+1,a+n+1);
    cout<<calc(1,n);

}
  
signed main (void) 
{ 
    // int t;  cin>>t;
    // while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0; 
} 