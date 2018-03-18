// Filename : testVertexOrEdgeCounting.cpp
//
#include "createEmptyDirectedGraph.hpp"
#include "createEmptyUndirectedGraph.hpp"
#include "countingVertices.hpp"
#include "countingEdges.hpp"

#include "gtest/gtest.h"

TEST(CountingTest, VexterCountingOnEmptyDirectedGraph)
{
    const auto g = CreateEmptyDirectedGraph();
    EXPECT_EQ(0, GetNumberOfVertices(g));
}

TEST(CountingTest, VexterCountingOnEmptyUndirectedDirectedGraph)
{

    const auto g = CreateEmptyUndirectedGraph();
    EXPECT_EQ(0, GetNumberOfVertices(g));
}


TEST(CountingTest, EdgeCountingOnEmptyDirectedGraph)
{
    const auto g = CreateEmptyDirectedGraph();
    EXPECT_EQ(0, GetNumberOfEdges(g));
}

TEST(CountingTest, EdgeCountingOnEmptyUndirectedGraph)
{
    const auto g = CreateEmptyUndirectedGraph();
    EXPECT_EQ(0, GetNumberOfEdges(g));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
