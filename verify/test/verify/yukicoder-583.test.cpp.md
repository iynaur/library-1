---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :heavy_check_mark: test/verify/yukicoder-583.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#5a4423c79a88aeb6104a40a645f9430c">test/verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/verify/yukicoder-583.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-30 02:46:21+09:00


* see: <a href="https://yukicoder.me/problems/no/583">https://yukicoder.me/problems/no/583</a>


## Depends on

* :question: <a href="../../../library/graph/graph-template.cpp.html">graph/graph-template.cpp</a>
* :question: <a href="../../../library/graph/others/eulerian-trail.cpp.html">Eulerian-Trail(オイラー路) <small>(graph/others/eulerian-trail.cpp)</small></a>
* :question: <a href="../../../library/template/template.cpp.html">template/template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://yukicoder.me/problems/no/583"

#include "../../template/template.cpp"

#include "../../graph/graph-template.cpp"
#include "../../graph/others/eulerian-trail.cpp"

int main() {
  int N, M;
  cin >> N >> M;
  vector< int > A(M), B(M);
  vector< int > used(N);
  for(int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
    used[A[i]] = true;
    used[B[i]] = true;
  }
  int ptr = 0;
  for(int i = 0; i < N; i++) {
    if(used[i]) used[i] = ptr++;
  }
  Edges<> es;
  for(int i = 0; i < M; i++) {
    es.emplace_back(used[A[i]], used[B[i]]);
  }
  if(eulerian_trail(es, false).empty()) cout << "NO\n";
  else cout << "YES\n";
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/verify/yukicoder-583.test.cpp"
#define PROBLEM "https://yukicoder.me/problems/no/583"

#line 1 "template/template.cpp"
#include<bits/stdc++.h>

using namespace std;

using int64 = long long;
const int mod = 1e9 + 7;

const int64 infll = (1LL << 62) - 1;
const int inf = (1 << 30) - 1;

struct IoSetup {
  IoSetup() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);
    cerr << fixed << setprecision(10);
  }
} iosetup;


template< typename T1, typename T2 >
ostream &operator<<(ostream &os, const pair< T1, T2 >& p) {
  os << p.first << " " << p.second;
  return os;
}

template< typename T1, typename T2 >
istream &operator>>(istream &is, pair< T1, T2 > &p) {
  is >> p.first >> p.second;
  return is;
}

template< typename T >
ostream &operator<<(ostream &os, const vector< T > &v) {
  for(int i = 0; i < (int) v.size(); i++) {
    os << v[i] << (i + 1 != v.size() ? " " : "");
  }
  return os;
}

template< typename T >
istream &operator>>(istream &is, vector< T > &v) {
  for(T &in : v) is >> in;
  return is;
}

template< typename T1, typename T2 >
inline bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }

template< typename T1, typename T2 >
inline bool chmin(T1 &a, T2 b) { return a > b && (a = b, true); }

template< typename T = int64 >
vector< T > make_v(size_t a) {
  return vector< T >(a);
}

template< typename T, typename... Ts >
auto make_v(size_t a, Ts... ts) {
  return vector< decltype(make_v< T >(ts...)) >(a, make_v< T >(ts...));
}

template< typename T, typename V >
typename enable_if< is_class< T >::value == 0 >::type fill_v(T &t, const V &v) {
  t = v;
}

template< typename T, typename V >
typename enable_if< is_class< T >::value != 0 >::type fill_v(T &t, const V &v) {
  for(auto &e : t) fill_v(e, v);
}

template< typename F >
struct FixPoint : F {
  FixPoint(F &&f) : F(forward< F >(f)) {}
 
  template< typename... Args >
  decltype(auto) operator()(Args &&... args) const {
    return F::operator()(*this, forward< Args >(args)...);
  }
};
 
template< typename F >
inline decltype(auto) MFP(F &&f) {
  return FixPoint< F >{forward< F >(f)};
}
#line 4 "test/verify/yukicoder-583.test.cpp"

#line 1 "graph/graph-template.cpp"
template< typename T = int >
struct Edge {
  int from, to;
  T cost;
  int idx;

  Edge() = default;

  Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}

  operator int() const { return to; }
};

template< typename T = int >
struct Graph {
  vector< vector< Edge< T > > > g;
  int es;

  Graph() = default;

  explicit Graph(int n) : g(n), es(0) {}

  size_t size() const {
    return g.size();
  }

  void add_directed_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es++);
  }

  void add_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es);
    g[to].emplace_back(to, from, cost, es++);
  }

  void read(int M, int padding = -1, bool weighted = false, bool directed = false) {
    for(int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      a += padding;
      b += padding;
      T c = T(1);
      if(weighted) cin >> c;
      if(directed) add_directed_edge(a, b, c);
      else add_edge(a, b, c);
    }
  }
};

template< typename T = int >
using Edges = vector< Edge< T > >;
#line 1 "graph/others/eulerian-trail.cpp"
/**
 * @brief Eulerian-Trail(オイラー路)
 */
template< typename T >
Edges< T > eulerian_trail(Edges< T > &es, bool directed, int s = -1) {
  int V = 0;
  for(auto &e : es) V = max(V, max(e.to, e.from) + 1);
  vector< vector< pair< Edge< T >, int > > > g(V);
  for(auto e : es) {
    int sz_to = (int) g[e.to].size();
    g[e.from].emplace_back(e, sz_to);
    if(!directed) {
      int sz_src = (int) g[e.from].size() - 1;
      swap(e.from, e.to);
      g[e.from].emplace_back(e, sz_src);
    }
  }
  if(directed) {
    vector< int > deg(V), used(V);
    for(auto &e : es) deg[e.from]++, used[e.from] = true;
    for(auto &e : es) deg[e.to]--, used[e.to] = true;
    vector< int > latte, malta;
    for(int i = 0; i < V; i++) {
      if(abs(deg[i]) >= 2) return {};
      else if(deg[i] == 1) latte.emplace_back(i);
      else if(deg[i] == -1) malta.emplace_back(i);
    }
    if(latte.size() > 1 || malta.size() > 1) return {};
    if(s != -1 && !latte.empty() && latte[0] != s) return {};
    if(s == -1) {
      for(int i = 0; i < V; i++) {
        if(used[i]) s = i;
      }
      if(!latte.empty()) s = latte[0];
    }
  } else {
    vector< int > odd;
    for(int i = 0; i < V; i++) {
      if(g[i].size() & 1) odd.emplace_back(i);
    }
    if(odd.size() > 2) return {};
    if(s != -1 && odd[0] != s && odd[1] != s) return {};
    if(s == -1) {
      for(int i = 0; i < V; i++) {
        if(g[i].size()) s = i;
      }
      if(!odd.empty()) s = odd[0];
    }
  }
  vector< Edge< T > > ord;
  stack< pair< int, Edge< T > > > st;
  st.emplace(s, Edge< T >(-1, -1));
  while(st.size()) {
    int idx = st.top().first;
    if(g[idx].empty()) {
      ord.emplace_back(st.top().second);
      st.pop();
    } else {
      auto e = g[idx].back();
      g[idx].pop_back();
      if(e.second == -1) continue;
      if(!directed) g[e.first.to][e.second].second = -1;
      st.emplace(e.first.to, e.first);
    }
  }
  ord.pop_back();
  reverse(begin(ord), end(ord));
  if(ord.size() != es.size()) return {};
  return ord;
}
#line 7 "test/verify/yukicoder-583.test.cpp"

int main() {
  int N, M;
  cin >> N >> M;
  vector< int > A(M), B(M);
  vector< int > used(N);
  for(int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
    used[A[i]] = true;
    used[B[i]] = true;
  }
  int ptr = 0;
  for(int i = 0; i < N; i++) {
    if(used[i]) used[i] = ptr++;
  }
  Edges<> es;
  for(int i = 0; i < M; i++) {
    es.emplace_back(used[A[i]], used[B[i]]);
  }
  if(eulerian_trail(es, false).empty()) cout << "NO\n";
  else cout << "YES\n";
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>
