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
#define DEBUG(x) cerr << #x << " = " << (x) << endl;
#define RANDOM(min, max) (rand() % ((max) - (min) + 1) + (min))
#define read(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define print(v) for(auto &x : v) cout<<x<<" "; cout<<endl;
#define readM(matrix, rows, cols) for(int i = 0;i < rows;i++) for(int j = 0; j < cols; j++) cin >> matrix[i][j];
#define printM(matrix, rows, cols) for(int i = 0;i < rows;i++) { for(int j = 0; j < cols; j++) cout << matrix[i][j] << " "; cout << endl; }
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back 
#define loop(i,a,b) for(ll i=a;i<b;i++) 
#define For(i,n) for(int i=0;i<(ll)n;i++)
#define Rev(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,n) for(int i=1;i<=n;++i)
#define F first
#define S second
#define endl '\n'
#define sortv(v) sort(all(v))
#define revsortv(v) sort(rall(v))
#define sorta(a,n) sort(a,a+n)
#define MAX_ELEMENT(container) *max_element(container.begin(), container.end())
#define MIN_ELEMENT(container) *min_element(container.begin(), container.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b)) / gcd(a, b)
#define INF 1e9
#define MOD 1000000007
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

string decToBin(ll n) {
    return bitset<64>(n).to_string().substr(bitset<64>(n).to_string().find('1'));
}
ll modExp(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
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
