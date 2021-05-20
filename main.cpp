#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include "data_structure.hpp"

using namespace std;
using namespace itis;


int main() {
//  int a, b;
//  ifstream fin("C:\\Users\\Admin\\CLionProjects\\untitled1\\100.csv");
//  fin >> a;
//  fin >> b;
//Graph g(6);
//    g.AddWeightedEdge(0, 1, 4);
//    g.AddWeightedEdge(0, 2, 4);
//    g.AddWeightedEdge(1, 2, 2);
//    g.AddWeightedEdge(1, 0, 4);
//    g.AddWeightedEdge(2, 0, 4);
//    g.AddWeightedEdge(2, 1, 2);
//    g.AddWeightedEdge(2, 3, 3);
//    g.AddWeightedEdge(2, 5, 2);
//    g.AddWeightedEdge(2, 4, 4);
//    g.AddWeightedEdge(3, 2, 3);
//    g.AddWeightedEdge(3, 4, 3);
//    g.AddWeightedEdge(4, 2, 4);
//    g.AddWeightedEdge(4, 3, 3);
//    g.AddWeightedEdge(5, 2, 2);
//    g.AddWeightedEdge(5, 4, 3);
//    g.AddWeightedEdge(2, 0, 8);
//    g.AddWeightedEdge(2, 1, 1);
//    g.AddWeightedEdge(3, 2, 4);
//    g.AddWeightedEdge(3, 4, 36);
//    g.AddWeightedEdge(4, 2, 1);
//    g.AddWeightedEdge(4, 2, 10);
//    g.AddWeightedEdge(4, 2, 11);
//    g.AddWeightedEdge(1, 2, 19);
//    g.AddWeightedEdge(4, 3, 32);
//    g.AddWeightedEdge(1,2,8);
//    g.kruskal();
//   g.print();
  int a, b;
  ifstream fin("C:\\Users\\Admin\\CLionProjects\\semester-work-kruskal\\dataset\\data\\insert\\01\\100.csv");
  fin >> a;
  fin >> b;



  Graph g(a+1);
  int mass[3];
  for(int i = 0; i < b; i++) {
    for(int i=0;i<3;++i)
    {
      fin >> mass[i];
    }
    g.AddWeightedEdge(mass[0],mass[1],mass[2]);
  }
  g.kruskal();
  g.print();
  cout <<a << b <<"End of program" << endl;
}