
#include <algorithm>
#include "data_structure.hpp"

using namespace std;
using namespace itis;


int main() {
Graph *g = new Graph(3);
    g->AddWeightedEdge(0, 1, 4);
    g->AddWeightedEdge(0, 2, 1);
    g->AddWeightedEdge(1, 2, 2);;
    g->kruskal();
   g->print();
}