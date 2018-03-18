// Filename : testAddingVertexOrEdge.cpp
//
#include "createEmptyDirectedGraph.hpp"
#include "createEmptyUndirectedGraph.hpp"
#include "addingVertex.hpp"
#include "addingEdge.hpp"
#include <gtest/gtest.h>


TEST(AddingTest, AddingVertex2EmptyDirectedGraph){
    auto g = CreateEmptyDirectedGraph();
    AddVertex(g);
    EXPECT_EQ(1, boost::num_vertices(g));
    EXPECT_EQ(0, boost::num_edges(g));
}

TEST(AddingTest, AddingVertex2EmptyUndirectedGraph){
    auto g = CreateEmptyUndirectedGraph();
    AddVertex(g);
    EXPECT_EQ(1, boost::num_vertices(g));
    EXPECT_EQ(0, boost::num_edges(g));
}

TEST(AddingTest, AddingEdge2EmptyDirectedGraph){
    auto g = CreateEmptyDirectedGraph();
    AddEdge(g);
    EXPECT_EQ(2, boost::num_vertices(g));
    EXPECT_EQ(1, boost::num_edges(g));
}

TEST(AddingTest, AddingEdge2EmptyUndirectedGraph){
    auto g = CreateEmptyUndirectedGraph();
    AddEdge(g);
    EXPECT_EQ(2, boost::num_vertices(g));
    EXPECT_EQ(1, boost::num_edges(g));
}

int main(int argc,char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
}
