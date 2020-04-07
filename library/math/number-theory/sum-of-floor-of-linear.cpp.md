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


# :heavy_check_mark: Sum-Of-Floor-Of-Linear(一次関数の床関数の和) <small>(math/number-theory/sum-of-floor-of-linear.cpp)</small>

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#d4a327615e3a055131f0682831111ce2">math/number-theory</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/number-theory/sum-of-floor-of-linear.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-03 18:40:18+09:00




## Verified with

* :heavy_check_mark: <a href="../../../verify/test/verify/yosupo-sum-of-floor-of-linear.test.cpp.html">test/verify/yosupo-sum-of-floor-of-linear.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/**
 * @brief Sum-Of-Floor-Of-Linear(一次関数の床関数の和)
 */
template< typename T >
T sum_of_floor_of_linear(const T &n, const T &m, T a, T b) {
  T ret = 0;
  if(a >= m) ret += (n - 1) * n * (a / m) / 2, a %= m;
  if(b >= m) ret += n * (b / m), b %= m;
  T y = (a * n + b) / m;
  if(y == 0) return ret;
  T x = y * m - b;
  ret += (n - (x + a - 1) / a) * y;
  ret += sum_of_floor_of_linear(y, a, m, (a - x % a) % a);
  return ret;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "math/number-theory/sum-of-floor-of-linear.cpp"
/**
 * @brief Sum-Of-Floor-Of-Linear(一次関数の床関数の和)
 */
template< typename T >
T sum_of_floor_of_linear(const T &n, const T &m, T a, T b) {
  T ret = 0;
  if(a >= m) ret += (n - 1) * n * (a / m) / 2, a %= m;
  if(b >= m) ret += n * (b / m), b %= m;
  T y = (a * n + b) / m;
  if(y == 0) return ret;
  T x = y * m - b;
  ret += (n - (x + a - 1) / a) * y;
  ret += sum_of_floor_of_linear(y, a, m, (a - x % a) % a);
  return ret;
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>
