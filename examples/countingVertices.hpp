// Filename : countingVertices.hpp
//

#ifndef BOOSTGRAPH_COUNTINGVERTICES_HPP
#define BOOSTGRAPH_COUNTINGVERTICES_HPP

#include <cassert>
#include <boost/graph/adjacency_list.hpp>

using namespace std;
template <typename Graph>
int GetNumberOfVertices(const Graph& g) noexcept
{
    const int n{
            static_cast<int>(num_vertices(g))
    };

    assert(static_cast<unsigned  long>(n)
        == num_vertices(g)
    );

    return n;
}

#endif //BOOSTGRAPH_COUNTINGVERTICES_HPP
