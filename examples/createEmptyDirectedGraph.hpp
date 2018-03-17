#ifndef BOOSTGRAPH_CREATEEMPTYGRAPH_HPP
#define BOOSTGRAPH_CREATEEMPTYGRAPH_HPP

#include <boost/graph/adjacency_list.hpp>

using namespace boost;

adjacency_list <>
CreateEmptyDirectedGraph() noexcept
{
    return {};
}
#endif //BOOSTGRAPH_CREATEEMPTYGRAPH_HPP
