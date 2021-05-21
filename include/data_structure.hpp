#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair<int,int>
// Заголовочный файл с объявлением структуры данных

namespace itis {

  // Tip 1: объявите здесь необходимые структуры, функции, константы и прочее

  // Пример: объявление константы времени компиляции в заголовочном файле
  inline constexpr auto kStringConstant = "Hello, stranger!";

  // Пример: объявление структуры с полями и методами
  struct Graph {
   private:
    vector<pair<int, edge>> G;
    vector<pair<int, edge>> T; // mst
    int *parent;
    int V;

   public:
    void AddWeightedEdge(int u, int v, int w);
    int find_set(int i);
    void union_set(int u, int v);
    void kruskal();
    void print();
    Graph(int V) {
      // здесь должны быть определения методов вашей структуры
      parent = new int[V];

      for (int i = 0; i < V; i++)
        parent[i] = i;

      G.clear();
      T.clear();
    }
    ~Graph() {
      delete[] parent;
      parent = nullptr;
    }
    // Tip 2: На начальном этапе разработки структуры данных можете определения методов задавать в
    // заголовочном файле, как только работа будет завершена, можно будет оставить здесь только объявления.

  };

}  // namespace itis