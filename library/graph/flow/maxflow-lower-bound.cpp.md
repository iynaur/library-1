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


# :warning: graph/flow/maxflow-lower-bound.cpp
* category: graph/flow


[Back to top page](../../../index.html)



## Code
```cpp
template< typename flow_t, template< typename > class F >
struct MaxFlowLowerBound {
  F< flow_t > flow;
  vector< flow_t > in, up;
  typename F< flow_t >::edge *latte, *malta;
  int X, Y, V;
  flow_t sum;

  MaxFlowLowerBound(int V) : V(V), flow(V + 2), X(V), Y(V + 1), sum(0), in(V) {}

  void add_edge(int from, int to, flow_t low, flow_t high) {
    assert(from != to);
    flow.add_edge(from, to, high - low, up.size());
    in[from] -= low;
    in[to] += low;
    up.emplace_back(high);
  }

  void build() {
    for(int i = 0; i < V; i++) {
      if(in[i] > 0) {
        flow.add_edge(X, i, in[i]);
        sum += in[i];
      } else if(in[i] < 0) {
        flow.add_edge(i, Y, -in[i]);
      }
    }
  }

  bool can_flow(int s, int t) {
    assert(s != t);
    flow.add_edge(t, s, flow.INF);
    latte = &flow.graph[t].back();
    malta = &flow.graph[s].back();
    return can_flow();
  }

  bool can_flow() {
    build();
    auto ret = flow.max_flow(X, Y);
    return ret >= sum;
  }

  flow_t max_flow(int s, int t) {
    if(can_flow(s, t)) {
      return flow.max_flow(s, t);
    } else {
      return -1;
    }
  }

  flow_t min_flow(int s, int t) {
    if(can_flow(s, t)) {
      auto ret = flow.INF - latte->cap;
      latte->cap = malta->cap = 0;
      return ret - flow.max_flow(t, s);
    } else {
      return -1;
    }
  }

  void output(int M) {
    vector< flow_t > ans(M);
    for(int i = 0; i < flow.graph.size(); i++) {
      for(auto &e : flow.graph[i]) {
        if(!e.isrev && ~e.idx) ans[e.idx] = up[e.idx] - e.cap;
      }
    }
    for(auto &p : ans) cout << p << endl;
  }
};

```

[Back to top page](../../../index.html)
