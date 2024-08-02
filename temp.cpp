#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pil;
typedef pair<long,long> pll;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef map<int, int> mii;
typedef map<ll,ll> mll;
typedef unordered_map<int, int> umii;
typedef unordered_map<long long, long long> umll;
typedef set<int> si;
typedef set<long long> sll;
typedef unordered_set<int> usi;
typedef unordered_set<long long> usll;
#define pb push_back 
#define loop(i,a,b) for(ll i=a;i<b;i++) 
#define For(i,n) for(int i=0;i<(ll)n;i++)
#define Rev(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,n) for(int i=1;i<=n;++i)
#define F first
#define S second
#define endl '\n'
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a,n) sort(a,a+n)
#define MAX_ELEMENT(container) *max_element(container.begin(), container.end())
#define MIN_ELEMENT(container) *min_element(container.begin(), container.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b)) / gcd(a, b)
#define INF 1e9
#define MOD 1000000007

string decToBin(ll n) {
    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}
bool isSubstring(const string& str, const string& substr) {
    return str.find(substr) != string::npos;
}

void init_code(){
  
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
//----------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------//
void solve(){
    ll n;  cin>>n;
    cout<<n<<endl;
}
signed main(){
    init_code();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;  
    while(t--){
        solve();
    }
  return 0;
}
