
#include <bits/stdc++.h>

using namespace std;

// vectors
// oops size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define int long long
#define pb push_back
#define ph push_heap
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
#define forn(i, x, n) for (int i = x; i < n; i++)

using ll = long long;
using db = long double; // or double, if TL is tight
using str = string;

#define vi vector<int>
#define vpp vector<pair<int, int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first

void mf()
{
  int n;
  cin >> n;
  string s;
  set<char> S;
  cin >> s;

  forn(i, 0, n)
  {
    if (s[i] >= 65 && s[i] <= 90)
      s[i] += 97 - 65;
    S.insert(s[i]);
  }
  if (S.size() == 26)
    cout << "YES\n";
  else
    cout << "NO\n";
}

signed main()
{

  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  mf();
  return 0;
}
