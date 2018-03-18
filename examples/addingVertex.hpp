// Filename : addingVertex.hpp
//

#ifndef BOOSTGRAPH_ADDINGVERTEX_HPP
#define BOOSTGRAPH_ADDINGVERTEX_HPP

#include <type_traits>//?
#include <boost/graph/adjacency_list.hpp>

using namespace boost;
template <typename Graph>
auto AddVertex(Graph& g) noexcept -> typename graph_traits<Graph>::vertex_descriptor
{
    static_assert(
            !std::is_const<Graph>::value, "Graph g cannot be const"
    );
    const auto vd = add_vertex(g);
    return vd;
}

#endif //BOOSTGRAPH_ADDINGVERTEX_HPP
