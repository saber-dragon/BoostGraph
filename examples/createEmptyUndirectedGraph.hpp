#ifndef BOOSTGRAPH_CREATEEMPTYUNDIRECTEDGRAPH_HPP
#define BOOSTGRAPH_CREATEEMPTYUNDIRECTEDGRAPH_HPP

#include <boost/graph/adjacency_list.hpp>

using namespace boost;

adjacency_list<vecS, vecS, undirectedS> CreateEmptyUndirectedGraph() noexcept
{
    return {};
}


#endif //BOOSTGRAPH_CREATEEMPTYUNDIRECTEDGRAPH_HPP
