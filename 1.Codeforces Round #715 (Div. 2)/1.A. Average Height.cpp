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


void solve(){
    int n,c;
    cin>>n;
    vector<int> odd,even;
    for(int i=0;i<n;++i){
        cin>>c;
        if(c%2 == 0) even.emplace_back(c);
        else odd.emplace_back(c);
    }
    for(auto c:odd) cout<<c<<" ";
    for(auto c:even) cout<<c<<" ";
}
  
signed main (void) 
{ 
    int t;  cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0; 
} 