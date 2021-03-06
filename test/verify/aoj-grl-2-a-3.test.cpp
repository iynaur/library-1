#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A"

#include "../../template/template.cpp"
#include "../../graph/graph-template.cpp"

#include "../../structure/union-find/union-find.cpp"

#include "../../graph/mst/boruvka.cpp"

int main() {
  int V, E;
  cin >> V >> E;
  Edges< int > g;
  for(int i = 0; i < E; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    g.emplace_back(x, y, z);
  }
  const int INF = 1 << 30;
  auto f = [&](int sz, vector< int > belong) {
    vector< pair< int, int > > ret(sz, {INF, -1});
    for(auto &e : g) {
      if(belong[e.from] == belong[e.to]) continue;
      ret[belong[e.from]] = min(ret[belong[e.from]], make_pair(e.cost, belong[e.to]));
      ret[belong[e.to]] = min(ret[belong[e.to]], make_pair(e.cost, belong[e.from]));
    }
    return ret;
  };
  cout << boruvka< int, decltype(f) >(V, f) << endl;
}
