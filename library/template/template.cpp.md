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
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :heavy_check_mark: template/template.cpp
<a href="../../index.html">Back to top page</a>

* category: template
* <a href="{{ site.github.repository_url }}/blob/master/template/template.cpp">View this file on GitHub</a>
    - Last commit date: 2019-08-13 21:45:04 +0900




## Verified With
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-0275.test.cpp.html">test/verify/aoj-0275.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-0294.test.cpp.html">test/verify/aoj-0294.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-0304.test.cpp.html">test/verify/aoj-0304.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-1163.test.cpp.html">test/verify/aoj-1163.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-1615.test.cpp.html">test/verify/aoj-1615.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-2306.test.cpp.html">test/verify/aoj-2306.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-2450.test.cpp.html">test/verify/aoj-2450.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-alds-1-1-c-2.test.cpp.html">test/verify/aoj-alds-1-1-c-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-alds-1-1-c.test.cpp.html">test/verify/aoj-alds-1-1-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-alds-1-14-b.test.cpp.html">test/verify/aoj-alds-1-14-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-alds-1-14-d.test.cpp.html">test/verify/aoj-alds-1-14-d.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-1-d.test.cpp.html">test/verify/aoj-dpl-1-d.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-1-g.test.cpp.html">test/verify/aoj-dpl-1-g.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-1-i.test.cpp.html">test/verify/aoj-dpl-1-i.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-3-c.test.cpp.html">test/verify/aoj-dpl-3-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-5-g.test.cpp.html">test/verify/aoj-dpl-5-g.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-5-i.test.cpp.html">test/verify/aoj-dpl-5-i.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dpl-5-j.test.cpp.html">test/verify/aoj-dpl-5-j.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dsl-1-a.test.cpp.html">test/verify/aoj-dsl-1-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dsl-1-b.test.cpp.html">test/verify/aoj-dsl-1-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dsl-2-a.test.cpp.html">test/verify/aoj-dsl-2-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-dsl-2-b.test.cpp.html">test/verify/aoj-dsl-2-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-a-2.test.cpp.html">test/verify/aoj-grl-1-a-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-a-3.test.cpp.html">test/verify/aoj-grl-1-a-3.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-a.test.cpp.html">test/verify/aoj-grl-1-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-b-2.test.cpp.html">test/verify/aoj-grl-1-b-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-b.test.cpp.html">test/verify/aoj-grl-1-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-c.test.cpp.html">test/verify/aoj-grl-1-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a-2.test.cpp.html">test/verify/aoj-grl-2-a-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a-3.test.cpp.html">test/verify/aoj-grl-2-a-3.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a-4.test.cpp.html">test/verify/aoj-grl-2-a-4.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a.test.cpp.html">test/verify/aoj-grl-2-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-b.test.cpp.html">test/verify/aoj-grl-2-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-3-a.test.cpp.html">test/verify/aoj-grl-3-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-3-b.test.cpp.html">test/verify/aoj-grl-3-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-3-c.test.cpp.html">test/verify/aoj-grl-3-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-5-a.test.cpp.html">test/verify/aoj-grl-5-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-5-c-2.test.cpp.html">test/verify/aoj-grl-5-c-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-5-c.test.cpp.html">test/verify/aoj-grl-5-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-6-a-2.test.cpp.html">test/verify/aoj-grl-6-a-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-6-a-3.test.cpp.html">test/verify/aoj-grl-6-a-3.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-6-a-4.test.cpp.html">test/verify/aoj-grl-6-a-4.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-6-a.test.cpp.html">test/verify/aoj-grl-6-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-6-b.test.cpp.html">test/verify/aoj-grl-6-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-7-a-2.test.cpp.html">test/verify/aoj-grl-7-a-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-7-a.test.cpp.html">test/verify/aoj-grl-7-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-ntl-1-a.test.cpp.html">test/verify/aoj-ntl-1-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-ntl-1-b.test.cpp.html">test/verify/aoj-ntl-1-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-ntl-1-d.test.cpp.html">test/verify/aoj-ntl-1-d.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-ntl-1-e.test.cpp.html">test/verify/aoj-ntl-1-e.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-bellnoulli-number.test.cpp.html">test/verify/yosupo-bellnoulli-number.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-discrete-logarithm-mod.test.cpp.html">test/verify/yosupo-discrete-logarithm-mod.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-exp-of-formal-power-series.test.cpp.html">test/verify/yosupo-exp-of-formal-power-series.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-factorize.test.cpp.html">test/verify/yosupo-factorize.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-general-matching.test.cpp.html">test/verify/yosupo-general-matching.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-inv-of-formal-power-series.test.cpp.html">test/verify/yosupo-inv-of-formal-power-series.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-log-of-formal-power-series.test.cpp.html">test/verify/yosupo-log-of-formal-power-series.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-matrix-det.test.cpp.html">test/verify/yosupo-matrix-det.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-maximum-independent-set.test.cpp.html">test/verify/yosupo-maximum-independent-set.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-multipoint-evaluation.test.cpp.html">test/verify/yosupo-multipoint-evaluation.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-partition-function.test.cpp.html">test/verify/yosupo-partition-function.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-polynomial-interpolation.test.cpp.html">test/verify/yosupo-polynomial-interpolation.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-sparse-matrix-det.test.cpp.html">test/verify/yosupo-sparse-matrix-det.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-sqrt-mod.test.cpp.html">test/verify/yosupo-sqrt-mod.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-sqrt-of-formal-power-series.test.cpp.html">test/verify/yosupo-sqrt-of-formal-power-series.test.cpp</a>


## Code
{% raw %}
```cpp
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

```
{% endraw %}

<a href="../../index.html">Back to top page</a>
