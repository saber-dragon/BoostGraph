#include "createEmptyDirectedGraph.hpp"
#include "createEmptyUndirectedGraph.hpp"
#include <exception>
#include "gtest/gtest.h"

TEST(GraphCreationTest, CreateEmptyDirectedGraph)
{
    bool succeed = true;
    try{
        const auto g = CreateEmptyDirectedGraph();
    } catch (std::exception& e) {
        // nothing
        succeed = false;
    }

    EXPECT_TRUE(succeed);
}

TEST(GraphCreationTest, CreateEmptyUndirectedGraph)
{
    bool succeed = true;
    try{
        const auto g = CreateEmptyUndirectedGraph();
    } catch (exception& e) {
        succeed = false;
    }

    EXPECT_TRUE(succeed);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
