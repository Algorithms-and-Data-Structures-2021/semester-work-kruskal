#include <iostream>
#include <vector>
#include <algorithm>

#include "Edge.hpp"

using namespace std;
using namespace itis;

int main() {

  int nV, nE;
  scanf("%d %d", &nV, &nE);
  vector<edge> edges;
  for (int i = 0; i < nE; i++) {
    int v1, v2, weight;
    scanf("%d, %d, %d", &v1, &v2, &weight);
    edges.push_back(edge(v1, v2, weight));
  }
  sort(edges.begin(), edges.end(), [](const edge &left, const edge &right) { return left.weight < right.weight; });


  return 0;
}