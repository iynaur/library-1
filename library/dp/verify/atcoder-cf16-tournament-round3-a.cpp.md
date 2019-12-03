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


# :warning: dp/verify/atcoder-cf16-tournament-round3-a.cpp
* category: dp/verify


[Back to top page](../../../index.html)



## Code
```cpp
int main() {
  int N, M, K, A[100000];
  cin >> N >> M >> K;
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector< int64 > dp(N);
  for(int i = 0; i < N; i++) {
    dp[i] = A[i];
  }
  for(int i = 1; i < K; i++) {
    vector< int64 > dp2(N);
    reverse(begin(dp), end(dp));
    dp.resize(N + M - 1);
    reverse(begin(dp), end(dp));
    auto p = slide_min(dp, M);
    for(int j = i; j < N; j++) {
      dp2[j] = max(dp2[j], p[j - 1] + 1LL * (i + 1) * A[j]);
    }
    dp.swap(dp2);
  }
  cout << *max_element(begin(dp), end(dp)) << endl;
}


```

[Back to top page](../../../index.html)
