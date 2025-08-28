//Adarsh Jha
//lowest < current < greatest
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long 
#define endl "\n"
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define repn(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define rep(n) repn(i, 0, n)
#define repi(i,n) repn(i, 0, n)
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define mod 1000000007
#define count_set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define maxa(arr,n) *max_element(arr, arr+n)
#define mina(arr,n) *min_element(arr, arr+n)
#define pn cout << "NO\n";
#define py cout << "YES\n";
#define take(arr,n) rep(n)cin>>arr[i];
int primes_till_n(int n) { vector<vector<int>> f(n + 1); return count_if(f.begin() + 2, f.end(), [](auto& v) { return v.empty(); }); }
int lcm(int a,int b){return ((a/__gcd(a,b))*b);}
bool isprime(int n){if(n==1||n==0)return false;for(int i=2;i*i<=n;i++){if(n%i==0) return false;}return true;}
void prime_factor(vector<pii> &factorization,int n){for(int i=2; i*i <= n; i++) {int count = 0;while(n % i == 0) {count++;n /= i;}if(count > 0) {factorization.push_back({i, count});}}if(n != 1) {factorization.push_back({n, 1});}}
void divisor(vi &div,int n){for(int i=1;i*i<=n;i++){if(n%i == 0){if(i == n/i)div.push_back(i);else{div.push_back(i);div.push_back(n/i);}}}}
int ncr(int n , int r){  int num =1, deno =1;if(r==0)return 1;    else{while(r>0){num*= n;deno*= r; int temp = __gcd(num , deno);num/= temp;deno/= temp;n--;r--;}}    return num;}
int ceel(int a,int b){if(a%b==0) return a/b;else return a/b+1;}
void convertToLowercase(string &str) {for (char &c : str) {if (c >= 'A' && c <= 'Z') {c = c + 32;}}}    
int maximumrepitationofarray(int n,int arr[]){int count=0;int maxcount=1;int c= arr[0];rep(n){if(arr[i]==c){count++;if(count>maxcount){maxcount=count;}}else{count=1;c=arr[i];}}return maxcount;}
bool poweroftwo(int n) {return !(n & (n - 1));}
int power(int A, int B) {int res = 1;while (B > 0) {if (B % 2 == 1) {    res *= A;}A *= A;B /= 2;}return res;}
//MATH FUNCTIONS

// int modAdd(int a, int b, int mod) { return (a + b) % mod; } 
// int modSubtract(int a, int b, int mod) { return (a - b + mod) % mod; } 
// int modMultiply(int a, int b, int mod) { return (a * b) % mod; } 
// int modExponentiation(int a, int b, int mod) { int result = 1; a = a % mod; while (b > 0) { if (b % 2 == 1) result = (result * a) % mod; b = b / 2; a = (a * a) % mod; } return result; } 
// int modInverse(int a, int mod) { int m0 = mod, t, q, x0 = 0, x1 = 1; if (mod == 1) return 0; while (a > 1) { q = a / mod; t = mod; mod = a % mod; a = t; t = x0; x0 = x1 - q * x0; x1 = t; } if (x1 < 0) x1 += m0; return x1; } 
// int modDivide(int a, int b, int mod) { int inv_b = modInverse(b, mod); if (inv_b == -1) { cout << "Modular inverse doesn't exist!" << endl; return -1; } return modMultiply(a, inv_b, mod); } 

/*REMOVE LEADING ZEROES
size_t pos = result.find_first_not_of('0');
result = (pos == std::string::npos) ? "0" : result.substr(pos);
*/

//Bit Manipulation functions
int setBit(int n, int pos) { return n | (1 << pos); } // Set the bit at position pos in n
int clearBit(int n, int pos) { return n & ~(1 << pos); } // Clear the bit at position pos in n
int toggleBit(int n, int pos) { return n ^ (1 << pos); } // Toggle the bit at position pos in n
int checkBit(int n, int pos) { return (n & (1 << pos)) != 0; } // Check if the bit at position pos in n is set
int countSetBits(int n) { return __builtin_popcount(n); } // Count the number of set bits in n
int countUnsetBits(int n) { return sizeof(n) * 8 - __builtin_popcount(n); } // Count the number of unset bits in n

// String hashing: sh/shclass, Number: numtheory, SparseTable: SparseTable
// Segment Tree(lazy propogation): SegmentTree, Merge Sort Tree: sorttree
// binary indexed tree: BIT, Segment Tree(point updates): SegmentPoint, Convex Hull: hull, Trie/Treap: Tries
// Combinatorics: pnc, Diophantine Equations: dpheq, Graphs: graphs, DSU: DSU, Geometry: Geometry, FFT: fft
// Persistent Segment Tree: perseg, FreqGraphs: bgraph
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;  //you can use less/greater/less_equal/greater_equal instead of less<int> as per your requirement
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
void __print(long long x) { cerr << x; }void __print(unsigned x) { cerr << x; }void __print(unsigned long x) { cerr << x; }void __print(unsigned long long x) { cerr << x; }void __print(float x) { cerr << x; }void __print(double x) { cerr << x; }void __print(long double x) { cerr << x; }void __print(char x) { cerr << '\'' << x << '\''; }void __print(const char *x) { cerr << '\"' << x << '\"'; }void __print(const string &x) { cerr << '\"' << x << '\"'; }void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename A>void __print(const A &x);template <typename A, typename B>void __print(const pair<A, B> &p);template <typename... A>void __print(const tuple<A...> &t);template <typename T>void __print(stack<T> s);template <typename T>void __print(queue<T> q);template <typename T, typename... U>void __print(priority_queue<T, U...> q);template <typename A>void __print(const A &x) {    bool first = true;    cerr << '{';    for (const auto &i : x) {        cerr << (first ? "" : ","), __print(i);        first = false;    }    cerr << '}';}template <typename A, typename B>void __print(const pair<A, B> &p) {   cerr << '(';   __print(p.first);   cerr << ',';   __print(p.second);   cerr << ')';}template <typename... A>void __print(const tuple<A...> &t) {  bool first = true;  cerr << '(';    apply([&first](const auto &...args) { ((cerr << (first ? "" : ","), __print(args), first = false), ...); }, t);   cerr << ')';}template <typename T>void __print(stack<T> s) {   vector<T> debugVector;   while (!s.empty()) {        T t = s.top();        debugVector.push_back(t);        s.pop();    }    reverse(debugVector.begin(), debugVector.end());    __print(debugVector);}template <typename T>void __print(queue<T> q) {   vector<T> debugVector;   while (!q.empty()) {       T t = q.front();       debugVector.push_back(t);       q.pop();   }    __print(debugVector);}template <typename T, typename... U>void __print(priority_queue<T, U...> q) {   vector<T> debugVector;   while (!q.empty()) {       T t = q.top();      debugVector.push_back(t);      q.pop();}__print(debugVector);}void _print() { cerr << "]\n"; }template <typename Head, typename... Tail>void _print(const Head &H, const Tail &...T) {__print(H);if (sizeof...(T))    cerr << ", ";_print(T...);}
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define debug(...)
#endif
/**************CODE_BEGINS_HERE************************************************/
// int componentSize=0;   //for the number of components
// int tokensize=0;  //for the size of subtree
// int dfs(int curr, int p ,vvi adj,int mid,int k)
// {
//     tokensize++;
//     for(auto neighbour:adj[curr])
//     {
//         if(neighbour!=p)
//         {
//             dfs(neighbour,curr,adj,mid,k);
//             if(tokensize>=mid)
//             {
//                 componentSize++;
//                 tokensize=0;
//             }
//         }

//         if(componentSize>=k)return componentSize;
//     }
    
//     if(componentSize>=k)return componentSize;
//     return -1;

// }
// int leaf_node=-1;
// void dfs2(int curr,int p,vvi adj)
// {
//     for(auto neigh:adj[curr])
//     {
//         if(neigh!=p)
//         {
//             dfs2(neigh,curr,adj);
//         }
//     }

//     leaf_node=curr;

// }
// bool f(int n, int mid,vvi adj,int st_node,int k)
// {
//     componentSize=0;
//     tokensize=0;
//     int check=dfs(st_node,-1,adj,mid,k);
//     if(check>=k)return true;
//     return false;
// }
// void solve()
// {
//     int n,k;cin>>n>>k;
//     vvi adj(n);
//     rep(n-1)
//     {
//         int a,b;cin>>a>>b;
//         adj[a-1].pb(b-1);
//         adj[b-1].pb(a-1);
//     }   

//     dfs2(0,-1,adj);
//     //if you want to find the highest x satisfying f(x):

//     int l=1,r=n+1,m;
//     while(r-l>1)
//     {
//         m=l+(r-l)/2;if(f(n,m,adj,leaf_node,k))l=m;else r=m;
//     }
//     cout<<l<<endl;
// }
int componentSize = 0;
//we don't need to create a global variable to declare size
int dfs(int curr, int p, const vvi& adj, int mid) 
{
    int current_subtree_size = 1;
    for (auto neighbour : adj[curr]) 
    {
        if (neighbour != p) {
            current_subtree_size += dfs(neighbour, curr, adj, mid);
        }
    }
    if (current_subtree_size >= mid) 
    {
        componentSize++;
        return 0;
    }
    return current_subtree_size;
}
//the approach i thought was starting from leaf_node but the approach gemini gave works from any node because all it did is partioning
//leaf node will also work but why do extra computation when you don't need it
//see the thing is that dfs already works from leaf node as it go deep into the tree and then from the last number it starts counting size of the subtree
bool f(int n, int mid, const vvi& adj, int k) 
{
    componentSize = 0;
    dfs(0, -1, adj, mid);
    return componentSize >= k + 1;
}
//this sound tough as binary search on trees/graphs but was easy to understand
void solve() {
    int n, k;
    cin >> n >> k;
    vvi adj(n);
    rep(n - 1) {
        int a, b;
        cin >> a >> b;
        adj[a - 1].pb(b - 1);
        adj[b - 1].pb(a - 1);
    }

    int l = 1, r = n + 1, m;
    while (r - l > 1) 
    {
        m = l + (r - l) / 2;
        if (f(n, m, adj, k))
            l = m;
        else
            r = m;
    }
    cout << l << endl;
}

/**************CODE_ENDS_ HERE************************************************/
signed main()
{
    fastio();
   int t=1;
   cin>>t;
   while(t--){solve();}
}
