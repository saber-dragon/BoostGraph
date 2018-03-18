// Filename : addingEdge.hpp
//

#ifndef BOOSTGRAPH_ADDINGEDGE_HPP
#define BOOSTGRAPH_ADDINGEDGE_HPP

#include "addingVertex.hpp"

using namespace boost;

template <typename Graph>
auto AddEdge(Graph& g) noexcept -> typename graph_traits<Graph>::edge_descriptor
{
    static_assert(
            !std::is_const<Graph>::value, "Graph g cannot be const"
    );
    auto ud = AddVertex(g);
    auto vd = AddVertex(g);
    auto ed = add_edge(ud, vd, g);
    assert (ed.second);
    return ed.first;
}

#endif //BOOSTGRAPH_ADDINGEDGE_HPP
