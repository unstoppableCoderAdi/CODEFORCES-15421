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
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int cnt_t=0,cnt_m=0;
    
    vector<int> cnt_tr(n);
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='T') cnt_t++;
        else cnt_m++;
        if(cnt_m > cnt_t){
            cout<<"NO";
            return;
        }
    }

    cnt_t=0,cnt_m=0;
    for(int i=0;i<n;++i){
        if(s[i]=='T') cnt_t++;
        else cnt_m++;
        if(cnt_m > cnt_t){
            cout<<"NO";
            return;
        }
    }

    if(2*cnt_m != cnt_t){
        cout<<"NO";
        return;
    }
    

    cout<<"YES";


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