// Filename : countingEdges.hpp
//

#ifndef BOOSTGRAPH_COUNTINGEDGES_HPP
#define BOOSTGRAPH_COUNTINGEDGES_HPP
#include <cassert>
#include <boost/graph/adjacency_list.hpp>

using namespace boost;

template <typename Graph>
int GetNumberOfEdges(const Graph& g) noexcept {
    const int n{
            static_cast<int>(num_edges(g))
    };
    assert(
            static_cast<unsigned long>(n)
            == num_edges(g)
    );
    return n;
}

#endif //BOOSTGRAPH_COUNTINGEDGES_HPP
