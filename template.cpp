#include<bits/stdc++.h>

using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", & x)
#define sl(x) scanf("%lld", & x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair < int, int > pii;
typedef pair < ll, ll > pl;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < pii > vpii;
typedef vector < pl > vpl;
typedef vector < vi > vvi;
typedef vector < vl > vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution < int > uid(0, lim - 1);
  return uid(rang);
}

//define used functions
int pow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);
void swap(int * a, int * b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);

const int mod = 1 '000'
000 '007;
const int N = 3e5,
  M = N;

vi g[N];
int a[N];
void solve() {
  //write code here//=================================================
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    solve();
  }
}

int pow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll) result * base) % mod;
    base = ((ll) base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m) {
  int u, v;
  while (m--) {
    cin >> u >> v;
    u--, v--;
    g[u].pb(v);
    g[v].pb(u);
  }
}

void dfs(int u, int par) {
  for (int v: g[u]) {
    if (v == par) continue;
    dfs(v, u);
  }
}

void swap(int * a, int * b) {
  int t = * a;
  * a = * b;
  * b = t;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // pivot 
  int i = (low - 1); // Index of smaller element 
  for (int j = low; j <= high - 1; j++) {
    if (arr[j] <= pivot) {
      i++; // increment index of smaller element 
      swap( & arr[i], & arr[j]);
    }
  }
  
  swap( & arr[i + 1], & arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
} 
