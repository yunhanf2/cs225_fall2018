#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <queue>
#include <algorithm>
#include <string>
#include <list>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;
/**
 * Returns an std::list of vertex keys that creates some shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  std::list<std::string> path;
  path.push_back(start);
  auto edges = incidentEdges(start);

  return path;
}
/*
push root
while queue not empty{
  node A = queue.top;
  queue.pop;
  queue.push(A left);
  queue.push(A right);
}*/
