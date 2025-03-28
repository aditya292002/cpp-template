#include <bits/stdc++.h>
using namespace std;

// Aliases for commonly used STL containers
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<long long>>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using mll = map<ll, ll>;
using umii = unordered_map<int, int>;
using umll = unordered_map<ll, ll>;
using si = set<int>;
using usi = unordered_set<int>;
using msi = multiset<int>;
using dqi = deque<int>;
using pqi = priority_queue<int>;                    // Max heap
using pqi_min = priority_queue<int, vi, greater<>>; // Min heap

// Macros
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sort_(arr) sort(all(arr))
#define FOR(i, s, e) for (int i = s; i < e; i++)
#define debug(a) cout << #a << " "; printt(a); cout << endl;
#define nline cout << '\n'

constexpr int mod = 1e9 + 7;
constexpr int dir[2][2] = {{1, 0}, {0, 1}}; // Direction vectors for grid traversal

// ---------------------- Print Functions ----------------------
template <class T> void printt(const vector<T>& vec) {
    cout << "[ "; for (const auto& i : vec) cout << i << " "; cout << "]" << endl;
}

template <class T> void printt(const T& var) { cout << ": " << var << endl; }

template <class T> void printt(const vector<vector<T>>& vec) {
    cout << "[\n"; for (const auto& row : vec) { cout << "  [ "; for (const auto& el : row) cout << el << " "; cout << "]\n"; } cout << "]" << endl;
}

template <class T> void printt(const pair<T, T>& myPair) {
    cout << ": { " << myPair.ff << ", " << myPair.ss << " }" << endl;
}

template <class T1, class T2> void printt(const map<T1, T2>& mp) {
    cout << "{ ";
    for (const auto& [key, value] : mp) cout << key << " -> " << value << ", ";
    cout << "}" << endl;
}

template <class T1, class T2> void printt(const unordered_map<T1, T2>& ump) {
    cout << "{ ";
    for (const auto& [key, value] : ump) cout << key << " -> " << value << ", ";
    cout << "}" << endl;
}

template <class T> void printt(const set<T>& st) {
    cout << "{ "; for (const auto& elem : st) cout << elem << " "; cout << "}" << endl;
}

template <class T> void printt(const multiset<T>& mst) {
    cout << "{ "; for (const auto& elem : mst) cout << elem << " "; cout << "}" << endl;
}

template <class T> void printt(const deque<T>& dq) {
    cout << "[ "; for (const auto& elem : dq) cout << elem << " "; cout << "]" << endl;
}


template <class T> void printt(const stack<T>& stk) {
    stack<T> temp = stk;
    // cout << "[ ";
    string ans = "";
    while (!temp.empty()) {
        ans += stk.top();
        temp.pop();
    }
    reverse(all(ans));
    cout << ans << endl;
    // cout << "]" << endl;
}

template <class T1, class T2> void printt(const pair<T1, T2>& myPair) {
    cout << ": { " << myPair.first << ", " << myPair.second << " }" << endl;
}
// ---------------------- Utility Functions ----------------------
void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

// Convert string to integer (handles leading zeros)
int convert_string_int(const string& s) {
    int ans = 0;
    for (char ch : s) if (isdigit(ch)) ans = ans * 10 + (ch - '0');
    return ans;
}

// Factorial function
ll fact(int n) {
    ll res = 1;
    for (int i = 2; i <= n; i++) res = (res * i) % mod;
    return res;
}

// Combination function (nCr)
ll nCr(int n, int r) {
    if (r > n) return 0;
    return fact(n) / (fact(r) * fact(n - r));
}

// Print adjacency list
void print_adjList(const vector<int> adjList[], int n) {
    for (int i = 0; i < n; i++) {
        debug(adjList[i]);
    }
}

// ---------------------- Example Usage ----------------------


